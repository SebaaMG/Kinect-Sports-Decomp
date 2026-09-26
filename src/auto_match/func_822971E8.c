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
extern unsigned int *auStack_3c;
extern int fn_82F62DA8();
extern unsigned int uStack_40;


undefined2 *
fn_822971E8(longlong param_1,undefined2 *param_2,undefined2 *param_3,undefined1 param_4,
             int param_5)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined4 uStack_40;
  undefined1 auStack_3c [60];
  
  if (param_2 != param_3) {
    puVar3 = (undefined1 *)(param_5 + -1);
    do {
      uStack_40 = 0;
      iVar1 = fn_82F62DA8(auStack_3c,*param_2,&uStack_40,param_1 + 0x18);
      uVar2 = param_4;
      if (iVar1 == 1) {
        uVar2 = auStack_3c[0];
      }
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = uVar2;
    } while (param_2 != param_3);
  }
  return param_2;
}

