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
extern int fn_82AB15D0();
extern int fn_82BC30C0();


undefined8 fn_82BB6200(int *param_1,int *param_2)

{
  char cVar3;
  int iVar1;
  int iVar2;
  undefined8 uVar4;
  
  cVar3 = (**(code **)(*param_1 + 0x44))();
  if (cVar3 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e03e8,0xffffffff820e0168,0xd5);
  }
  cVar3 = (**(code **)(*param_2 + 0x44))(param_2);
  if (cVar3 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e03d4,0xffffffff820e0168,0xd6);
  }
  iVar1 = fn_82BC30C0(param_1);
  iVar2 = fn_82BC30C0(param_2);
  if ((((param_1[0x2a] != param_2[0x2a]) || (iVar1 == 0)) || (iVar2 == 0)) ||
     (uVar4 = 1, iVar1 != iVar2)) {
    uVar4 = 0;
  }
  return uVar4;
}

