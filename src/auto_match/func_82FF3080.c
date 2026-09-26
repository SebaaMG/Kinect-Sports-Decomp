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
extern int fn_82FA5190();
extern int fn_8301A7B8();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642EC;
extern unsigned int lbl_83264574;


double fn_82FF3080(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  double dVar5;
  
  dVar5 = (double)lbl_8200133C;
  puVar4 = (undefined4 *)fn_8301A7B8(lbl_832642EC,param_1);
  iVar2 = lbl_83264574;
  if (puVar4 != (undefined4 *)0x0) {
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x10)) {
      if ((*(undefined4 **)(iVar2 + 0x70) == puVar4) && (dVar5 <= (double)*(float *)(iVar2 + 0x140))
         ) {
        dVar5 = (double)*(float *)(iVar2 + 0x140);
      }
    }
    uVar1 = puVar4[0x17];
    puVar4[0x17] = (int)((ulonglong)uVar1 - 1);
    uVar3 = lbl_831BC768;
    if ((longlong)((ulonglong)uVar1 - 1) < 1) {
      (**(code **)*puVar4)(puVar4,0);
      fn_82FA5190(uVar3,puVar4);
    }
  }
  return dVar5;
}

