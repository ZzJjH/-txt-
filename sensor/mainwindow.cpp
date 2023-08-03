#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->newaction,&QAction::triggered,this,&MainWindow::newactionslot);
    connect(ui->openaction,&QAction::triggered,this,&MainWindow::openactionslot);
    connect(ui->saveaction,&QAction::triggered,this,&MainWindow::saveactionslot);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newactionslot()
{
    ui->textEdit->clear();
    this->setWindowTitle("新建文本文档.txt");
}
void MainWindow::openactionslot()
{
    QString  filename=QFileDialog::getOpenFileName(this, ("选择一个文件"), QCoreApplication::applicationFilePath(),("*.txt"));
    if(filename.isEmpty())
    {
        QMessageBox::warning(this,"警告","请选择一个文件");//点取消弹出警告
    }
    else
    {
        //qDebug()<<filename;//打印文件名
        QFile file(filename);//创建文件对象
        file.open(QIODevice::ReadOnly);
        QByteArray ba = file.readAll();
        ui->textEdit->setText(QString(ba));
    }

}


void MainWindow::saveactionslot()
{
    QString  filename=QFileDialog::getSaveFileName(this, ("选择一个文件"), QCoreApplication::applicationFilePath());
        if(filename.isEmpty())
        {
            QMessageBox::warning(this,"警告","请选择一个文件");//点取消弹出警告
        }
        else
        {
            //qDebug()<<filename;//打印文件名
            QFile file(filename);//创建文件对象
            file.open(QIODevice::WriteOnly);
            QByteArray ba;//Qstring-----ui->textEdit->toPlainText()
            QByteArray ba1=ui->textEdit->toPlainText().toLatin1();
            ba.append( ba1);
           // file.write(ba);//开始
            //BytQeArray a=ba1.mid(0,5) ;
           /* QString ba2=ba1;
            QStringList list = ba2.split(",");
            QString a=list[1];*/
           /* QString ba2=ba1;//成功代码截取双引号中字符串
            QStringList list = ba2.split("\"");
            QString a=list.at(9);
            qDebug()<<a;*/
            /*foreach (QString line, list)    //把List中的每一行一次赋值给line
{
                qDebug() << line;
            }*/
            QString ba2=ba1;//数据类型转换
            QStringList list = ba2.split("\n");//分割每一行
            QByteArray ba3="时间:\tx:\ty:\tz:\tw:\teuler:\tacc:\ts:\tp:\n";
            //用来存放excel中文本
            for(int i=0;i<297;i++)
            { QString line=list.at(i);//定位第i行
                QStringList duan = line.split("\"");//将行分段
                {//截取时间
                    QString a=line.mid(13,23);
                    QByteArray a1=a.toLatin1();//转换数据类型
                    ba3.append(a1);ba3.append("\t");//存储数据类型并留空格
                }
                {//截取x
                    QString b=duan.at(9);
                    QByteArray b1=b.toLatin1();
                    ba3.append(b1);ba3.append("\t");
                }
                {//截取y
                    QString c=duan.at(13);
                    QByteArray c1=c.toLatin1();
                    ba3.append(c1);ba3.append("\t");
                }
                {//截取z
                    QString d=duan.at(17);
                    QByteArray d1=d.toLatin1();
                    ba3.append(d1);ba3.append("\t");
                }
                {//截取w
                    QString e=duan.at(21);
                    QByteArray e1=e.toLatin1();
                    ba3.append(e1);ba3.append("\t");
                }
                {//截取euler
                    QString f=duan.at(25);
                    QByteArray f1=f.toLatin1();
                    ba3.append(f1);ba3.append("\t");
                }
                {//截取acc
                    QString g=duan.at(29);
                    QByteArray g1=g.toLatin1();
                    ba3.append(g1);ba3.append("\t");
                }
                {//截取s
                    QString h=duan.at(33);
                    QByteArray h1=h.toLatin1();
                    ba3.append(h1);ba3.append("\t");
                }
                {//截取p
                    QString j=duan.at(37);
                    QByteArray j1=j.toLatin1();
                    ba3.append(j1);ba3.append("\n");
                }

            }
                file.write(ba3);
            file.close();//结束
        }
}

