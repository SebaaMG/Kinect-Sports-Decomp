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
extern int fn_82D7D528();
extern int fn_82DB61C8();
extern unsigned int lbl_82134508;
extern unsigned int lbl_8323B520;


void fn_82DB6C98(undefined8 param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  double dVar2;
  
  *param_4 = (int)(param_4 + 4);
  param_4[0xc20] = 0;
  dVar2 = (double)lbl_82134508;
  param_4[0xc0c] = (int)lbl_82134508;
  iVar1 = *(char *)(param_2 + 0xc) * 0x40 + *param_3;
  param_3[0x18] = iVar1 + 0x1c20;
  param_3[5] = *(int *)(iVar1 + 0x1c30);
  fn_82D7D528(param_2,param_3,param_4,*(undefined4 *)(param_2 + 8));
  if (lbl_8323B520 != 1) {
    if ((int *)*param_4 != param_4 + 4) {
      (**(code **)(**(int **)(param_2 + 8) + 0x18))
                (*(int **)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),
                 *(undefined4 *)(param_2 + 0x14),param_3,param_4);
    }
    if ((double)(float)param_4[0xc0c] != dVar2) {
      fn_82DB61C8(param_1,param_4,param_2);
    }
  }
  return;
}

