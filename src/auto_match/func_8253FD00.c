typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82809400();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82192680;
extern unsigned int lbl_821956B0;
extern unsigned int lbl_831C1E78;
extern unsigned int lbl_831C1E7C;


void fn_8253FD00(double param_1,int param_2,float *param_3)

{
  double dVar1;
  
  if (param_1 == (double)lbl_82192680) {
    param_1 = (double)*(float *)(&lbl_831C1E7C + param_2 * 0xc);
  }
  dVar1 = (double)fn_82809400((double)(*(float *)(&lbl_831C1E78 + param_2 * 0xc) /
                                       (float)(param_1 * (double)lbl_821916FC)));
  *param_3 = (float)(dVar1 * (double)lbl_821956B0);
  return;
}

