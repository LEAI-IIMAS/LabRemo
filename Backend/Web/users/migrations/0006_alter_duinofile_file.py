# Generated by Django 4.2.4 on 2023-11-23 07:48

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('users', '0005_alter_duinofile_file_alter_user_isavailable'),
    ]

    operations = [
        migrations.AlterField(
            model_name='duinofile',
            name='file',
            field=models.FileField(upload_to='user_1/11-23-2023-07:48:15/'),
        ),
    ]
