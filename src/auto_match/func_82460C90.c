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
extern unsigned int *auStack_2c;
extern int fn_8256BF18();
extern int fn_8256D078();
extern int fn_8256D1B8();
extern int fn_8259BB38();
extern unsigned int uStack_30;


void fn_82460C90(int param_1,uint *param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uStack_30;
  uint auStack_2c [11];
  
  puVar4 = (uint *)(param_1 + 0x94);
  if (puVar4 != (uint *)0x0) {
    uVar3 = (ulonglong)*puVar4;
    if (uVar3 != (uVar3 - 1) + (ulonglong)(uVar3 == 0)) {
      uVar1 = fn_8256BF18();
      fn_8256D078(uVar1,puVar4);
      *puVar4 = 0;
    }
  }
  if (param_2 != (uint *)0x0) {
    uVar3 = (ulonglong)*param_2;
    if (uVar3 != (uVar3 - 1) + (ulonglong)(uVar3 == 0)) {
      iVar2 = fn_8256BF18();
      uStack_30 = *param_2;
      fn_8259BB38(auStack_2c,iVar2,&uStack_30);
      uVar3 = (ulonglong)auStack_2c[0];
      if (uVar3 != *(uint *)(iVar2 + 4)) {
        fn_8256D1B8(iVar2,uVar3 + 0x10,uVar3 + 0x28,*param_2);
      }
      *puVar4 = *param_2;
    }
  }
  return;
}

