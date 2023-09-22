# Generated by Django 4.2.4 on 2023-09-05 19:11

from django.conf import settings
import django.contrib.auth.models
from django.db import migrations, models
import django.db.models.deletion
import django.utils.timezone


class Migration(migrations.Migration):

    initial = True

    dependencies = [
        ('auth', '0012_alter_user_first_name_max_length'),
    ]

    operations = [
        migrations.CreateModel(
            name='User',
            fields=[
                ('last_login', models.DateTimeField(blank=True, null=True, verbose_name='last login')),
                ('is_superuser', models.BooleanField(default=False, help_text='Designates that this user has all permissions without explicitly assigning them.', verbose_name='superuser status')),
                ('first_name', models.CharField(blank=True, max_length=150, verbose_name='first name')),
                ('last_name', models.CharField(blank=True, max_length=150, verbose_name='last name')),
                ('is_staff', models.BooleanField(default=False, help_text='Designates whether the user can log into this admin site.', verbose_name='staff status')),
                ('is_active', models.BooleanField(default=True, help_text='Designates whether this user should be treated as active. Unselect this instead of deleting accounts.', verbose_name='active')),
                ('date_joined', models.DateTimeField(default=django.utils.timezone.now, verbose_name='date joined')),
                ('id', models.AutoField(primary_key=True, serialize=False)),
                ('username', models.CharField(max_length=45, unique=True)),
                ('email', models.CharField(max_length=45, unique=True)),
                ('password', models.CharField(max_length=200)),
                ('isAvailable', models.SmallIntegerField(default=1)),
                ('groups', models.ManyToManyField(blank=True, help_text='The groups this user belongs to. A user will get all permissions granted to each of their groups.', related_name='user_set', related_query_name='user', to='auth.group', verbose_name='groups')),
            ],
            options={
                'verbose_name': 'user',
                'verbose_name_plural': 'users',
                'abstract': False,
            },
            managers=[
                ('objects', django.contrib.auth.models.UserManager()),
            ],
        ),
        migrations.CreateModel(
            name='AuthorLabSessions',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('isAvailable', models.SmallIntegerField()),
                ('user', models.ForeignKey(default=1, on_delete=django.db.models.deletion.CASCADE, related_name='authorlabsessions', to=settings.AUTH_USER_MODEL)),
            ],
            options={
                'abstract': False,
            },
        ),
        migrations.CreateModel(
            name='Careers',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=45, unique=True)),
                ('isAvailable', models.CharField(choices=[(1, 'Available'), (0, 'Unavailable')], default=0, max_length=2)),
                ('year', models.CharField(max_length=45)),
            ],
            options={
                'abstract': False,
            },
        ),
        migrations.CreateModel(
            name='Country',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=45, unique=True)),
                ('isAvailable', models.CharField(choices=[(1, 'Available'), (0, 'Unavailable')], default=0, max_length=2)),
                ('cKey', models.CharField(max_length=3, unique=True)),
            ],
            options={
                'abstract': False,
            },
        ),
        migrations.CreateModel(
            name='Course',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('isAvailable', models.CharField(choices=[(1, 'Available'), (0, 'Unavailable')], default=0, max_length=2)),
                ('semesterId', models.CharField(max_length=45)),
                ('groupId', models.IntegerField()),
            ],
            options={
                'abstract': False,
            },
        ),
        migrations.CreateModel(
            name='LabSessions',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=45, unique=True)),
                ('isAvailable', models.CharField(choices=[(1, 'Available'), (0, 'Unavailable')], default=0, max_length=2)),
                ('serializedSet', models.TextField()),
                ('authorLabSession', models.ForeignKey(default=1, on_delete=django.db.models.deletion.CASCADE, related_name='authorlabsessions', to='users.authorlabsessions')),
            ],
            options={
                'abstract': False,
            },
        ),
        migrations.CreateModel(
            name='Roster',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('isAvailable', models.CharField(choices=[(1, 'Available'), (0, 'Unavailable')], default=0, max_length=2)),
                ('course', models.ForeignKey(default=1, on_delete=django.db.models.deletion.CASCADE, related_name='courses', to='users.course')),
            ],
            options={
                'abstract': False,
            },
        ),
        migrations.CreateModel(
            name='UserType',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=45, unique=True)),
                ('isAvailable', models.CharField(choices=[(1, 'Available'), (0, 'Unavailable')], default=0, max_length=2)),
            ],
            options={
                'abstract': False,
            },
        ),
        migrations.CreateModel(
            name='Universities',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=45, unique=True)),
                ('isAvailable', models.CharField(choices=[(1, 'Available'), (0, 'Unavailable')], default=0, max_length=2)),
                ('country', models.ForeignKey(default=1, on_delete=django.db.models.deletion.CASCADE, related_name='universities', to='users.country')),
            ],
            options={
                'abstract': False,
            },
        ),
        migrations.CreateModel(
            name='Subject',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=45, unique=True)),
                ('isAvailable', models.CharField(choices=[(1, 'Available'), (0, 'Unavailable')], default=0, max_length=2)),
                ('credits', models.CharField(max_length=45)),
                ('semesterNumber', models.CharField(max_length=45)),
                ('career', models.ForeignKey(default=1, on_delete=django.db.models.deletion.CASCADE, related_name='careers', to='users.careers')),
            ],
            options={
                'abstract': False,
            },
        ),
        migrations.CreateModel(
            name='StudentLabSession',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('isAvailable', models.CharField(choices=[(1, 'Available'), (0, 'Unavailable')], default=0, max_length=2)),
                ('serializedSet', models.TextField()),
                ('sharedLink', models.CharField(max_length=45)),
                ('labSession', models.ForeignKey(default=1, on_delete=django.db.models.deletion.CASCADE, related_name='labsessions', to='users.labsessions')),
                ('roster', models.ForeignKey(default=1, on_delete=django.db.models.deletion.CASCADE, related_name='roster', to='users.roster')),
            ],
            options={
                'abstract': False,
            },
        ),
        migrations.CreateModel(
            name='Student',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('isAvailable', models.CharField(choices=[(1, 'Available'), (0, 'Unavailable')], default=0, max_length=2)),
                ('career', models.ForeignKey(default=1, on_delete=django.db.models.deletion.CASCADE, related_name='student_careers', to='users.careers')),
            ],
            options={
                'abstract': False,
            },
        ),
        migrations.CreateModel(
            name='Schools',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=45, unique=True)),
                ('isAvailable', models.CharField(choices=[(1, 'Available'), (0, 'Unavailable')], default=0, max_length=2)),
                ('university', models.ForeignKey(default=1, on_delete=django.db.models.deletion.CASCADE, related_name='universities', to='users.universities')),
            ],
            options={
                'abstract': False,
            },
        ),
        migrations.AddField(
            model_name='roster',
            name='students',
            field=models.ForeignKey(default=1, on_delete=django.db.models.deletion.CASCADE, related_name='students', to='users.student'),
        ),
        migrations.CreateModel(
            name='Professor',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=45, unique=True)),
                ('isAvailable', models.CharField(choices=[(1, 'Available'), (0, 'Unavailable')], default=0, max_length=2)),
                ('user', models.ForeignKey(default=1, on_delete=django.db.models.deletion.CASCADE, related_name='user', to=settings.AUTH_USER_MODEL)),
            ],
            options={
                'abstract': False,
            },
        ),
        migrations.AddField(
            model_name='labsessions',
            name='subject',
            field=models.ForeignKey(default=1, on_delete=django.db.models.deletion.CASCADE, related_name='subject', to='users.subject'),
        ),
        migrations.AddField(
            model_name='course',
            name='professor',
            field=models.ForeignKey(default=1, on_delete=django.db.models.deletion.CASCADE, related_name='professor', to='users.professor'),
        ),
        migrations.AddField(
            model_name='course',
            name='subject',
            field=models.ForeignKey(default=1, on_delete=django.db.models.deletion.CASCADE, related_name='course_subject', to='users.subject'),
        ),
        migrations.AddField(
            model_name='careers',
            name='schools',
            field=models.ForeignKey(default=1, on_delete=django.db.models.deletion.CASCADE, related_name='schools', to='users.schools'),
        ),
        migrations.AddField(
            model_name='user',
            name='userType',
            field=models.ForeignKey(blank=True, null=True, on_delete=django.db.models.deletion.CASCADE, related_name='users', to='users.usertype'),
        ),
        migrations.AddField(
            model_name='user',
            name='user_permissions',
            field=models.ManyToManyField(blank=True, help_text='Specific permissions for this user.', related_name='user_set', related_query_name='user', to='auth.permission', verbose_name='user permissions'),
        ),
    ]
