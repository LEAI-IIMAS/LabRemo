# Generated by Django 4.2.4 on 2023-11-23 08:07

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('workspace', '0002_componenttype_component_component_type'),
    ]

    operations = [
        migrations.AlterField(
            model_name='component',
            name='isAvailable',
            field=models.IntegerField(choices=[(1, 'Available'), (0, 'Unavailable')], default=0),
        ),
        migrations.AlterField(
            model_name='componentlist',
            name='isAvailable',
            field=models.IntegerField(choices=[(1, 'Available'), (0, 'Unavailable')], default=0),
        ),
        migrations.AlterField(
            model_name='componenttype',
            name='isAvailable',
            field=models.IntegerField(choices=[(1, 'Available'), (0, 'Unavailable')], default=0),
        ),
        migrations.AlterField(
            model_name='mainboard',
            name='isAvailable',
            field=models.IntegerField(choices=[(1, 'Available'), (0, 'Unavailable')], default=0),
        ),
    ]
