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
extern int fn_825089A0();
extern int fn_8287D6D8();
extern int fn_828821A0();
extern int fn_82882218();
extern unsigned int uStack_30;


void fn_8287D950(int param_1,int param_2)

{
  undefined4 uVar1;
  char cVar4;
  int *piVar2;
  int iVar3;
  undefined4 uStack_30;
  int aiStack_2c [11];
  
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  cVar4 = fn_828821A0(uVar1);
  if ((cVar4 == '\0') && (cVar4 = fn_82882218(uVar1), cVar4 == '\0')) {
    uStack_30 = uVar1;
    fn_8287D6D8(aiStack_2c,param_1 + 0xf0,&uStack_30);
    piVar2 = (int *)fn_825089A0();
    iVar3 = (**(code **)(*piVar2 + 0xc))();
    iVar3 = iVar3 - (int)*(undefined8 *)(param_2 + 0x40);
    *(int *)(aiStack_2c[0] + 0x24) = *(int *)(aiStack_2c[0] + 0x24) + 1;
    *(int *)(aiStack_2c[0] + 0x20) = iVar3 + *(int *)(aiStack_2c[0] + 0x20);
    *(int *)(param_1 + 8) = iVar3 + *(int *)(param_1 + 8);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  return;
}

