import os

print('Task: ', end=' ')
task = input()
tasks_list = ['1', '2', '3', '4', '5', '6', '7']
if task in tasks_list:
    file = 'Task' + task + '.py'
    os.system('python ' + file)
else:
    print('NO such task')
