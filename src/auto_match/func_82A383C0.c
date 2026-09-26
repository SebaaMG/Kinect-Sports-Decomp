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
extern int fn_82A381F0();
extern unsigned int iStack_44;


undefined8 fn_82A383C0(undefined4 *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int iStack_44;
  undefined4 *apuStack_40 [16];
  
  uVar5 = 0;
  RtlEnterCriticalSection(param_1 + 5);
  puVar2 = (undefined4 *)fn_82A381F0(param_1,param_2,1);
  if (puVar2 == (undefined4 *)0x0) {
    uVar5 = 0xffffffffc000000f;
  }
  else {
    puVar6 = puVar2;
    if (puVar2[1] == -1) {
      puVar6 = (undefined4 *)(puVar2[4] * 0x58 + param_1[1]);
    }
    bVar1 = (ulonglong)(uint)puVar6[0x15] - 1 == 0;
    puVar6[0x15] = (int)((ulonglong)(uint)puVar6[0x15] - 1);
    if (bVar1) {
      NtClose(puVar2[5]);
      NtClose(*puVar2);
      uVar5 = (**(code **)(*(int *)*param_1 + 4))(puVar2[1]);
      apuStack_40[0] = puVar6;
    }
    uVar3 = (ulonglong)bVar1;
    if (puVar6 != puVar2) {
      uVar3 = uVar3 + 1;
      apuStack_40[bVar1] = puVar2;
    }
    if (uVar3 != 0) {
      piVar4 = &iStack_44;
      do {
        piVar4 = piVar4 + 1;
        *(undefined4 *)(((*piVar4 - param_1[1]) / 0x58) * 0x58 + param_1[1]) = 0xffffffff;
        param_1[3] = param_1[3] + -1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  RtlLeaveCriticalSection(param_1 + 5);
  return uVar5;
}

