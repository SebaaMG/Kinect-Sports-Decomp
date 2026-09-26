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
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_82E4FE40();
extern int fn_82E5A2E0();
extern int fn_82E5EE70();
extern unsigned int uStack_2c;


longlong fn_82E5EF70(int *param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined2 auStack_30 [2];
  undefined4 uStack_2c;
  undefined4 auStack_28 [10];
  
  if (((param_1 == (int *)0x0) || ((param_2 & 0xffffffff) == 0)) || ((param_3 & 0xffffffff) == 0)) {
    lVar2 = -0x7fffbffd;
  }
  else {
    lVar2 = 0;
    uStack_2c = 0;
    auStack_28[0] = 0;
    auStack_30[0] = 0;
    iVar1 = (**(code **)(*param_1 + 0x34))(param_1,0xffffffff8214bff0,&uStack_2c,auStack_28);
    if ((iVar1 == 0) && (lVar2 = fn_82E5EE70(param_2,uStack_2c,auStack_30), -1 < lVar2)) {
      lVar2 = fn_82E5A2E0(param_3,auStack_30[0]);
    }
    fn_82E4FE40(uStack_2c);
  }
  return lVar2;
}

