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
extern unsigned int lbl_831882F0;


undefined8 fn_82E44168(undefined4 *param_1,ulonglong param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 *apuStack_30 [12];
  
  puVar2 = (undefined4 *)0x0;
  for (puVar3 = param_1;
      (puVar3 != (undefined4 *)0x0 && ((ulonglong)(uint)puVar3[1] <= (param_2 & 0xffffffff)));
      puVar3 = (undefined4 *)puVar3[0x19]) {
    apuStack_30[0] = puVar3;
    if ((param_2 & 0xffffffff) < (ulonglong)(puVar3[1] + 0x14)) goto LAB_82e4420c;
    puVar2 = puVar3;
  }
  apuStack_30[0] = (undefined4 *)0x0;
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0xffffffff8000ffff;
  }
  else {
    uVar4 = (**(code **)*param_1)(param_1,apuStack_30);
    if (-1 < (int)uVar4) {
      apuStack_30[0][1] = (int)((param_2 & 0xffffffff) / 0x14) * 0x14;
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[0x19] = apuStack_30[0];
      }
      apuStack_30[0][0x19] = puVar3;
LAB_82e4420c:
      uVar4 = 0;
      param_2 = param_2 - (uint)apuStack_30[0][1];
      iVar1 = (int)((param_2 & 0xffffffff) >> 3);
      *(byte *)((int)apuStack_30[0] + iVar1 + 0x10) =
           (&lbl_831882F0)[(uint)param_2 & 7] | *(byte *)((int)apuStack_30[0] + iVar1 + 0x10);
      *(undefined4 *)((int)((param_2 + 5 & 0xffffffff) << 2) + (int)apuStack_30[0]) = param_3;
    }
  }
  return uVar4;
}

