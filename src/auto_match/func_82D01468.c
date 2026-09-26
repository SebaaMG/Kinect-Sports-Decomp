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
extern unsigned int *auStack_40;


undefined1 * fn_82D01468(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  char *pcVar6;
  undefined1 auStack_40 [64];
  
  puVar1 = (undefined4 *)*param_2;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      *param_1 = 1;
      return param_1;
    }
    if ((param_2[6] - 1 & (uint)puVar1) != 0) break;
    bVar5 = false;
    for (puVar2 = (undefined4 *)param_2[3]; puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      pcVar6 = (char *)(**(code **)(*(int *)param_2[0xc] + 0xc))
                                 (auStack_40,(int *)param_2[0xc],puVar2);
      if (*pcVar6 == '\0') goto LAB_82d01554;
      puVar3 = (undefined4 *)puVar2[2];
      if (puVar3 <= puVar1) {
        uVar4 = param_2[1];
        if (puVar1 < (undefined4 *)(puVar2[3] * uVar4 + (int)puVar3)) {
          trapWord(6,(ulonglong)uVar4,0);
          if ((int)puVar1 - (int)puVar3 != ((uint)((int)puVar1 - (int)puVar3) / uVar4) * uVar4)
          goto LAB_82d01554;
          bVar5 = true;
          break;
        }
      }
    }
    if (!bVar5) break;
    puVar1 = (undefined4 *)*puVar1;
  }
LAB_82d01554:
  *param_1 = 0;
  return param_1;
}

