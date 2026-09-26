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
extern int fn_83016CE8();
extern int fn_83016D40();
extern int fn_830197E8();
extern unsigned int iStack_50;
extern unsigned int uStack_4c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_830171D8(int param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iStack_50;
  uint uStack_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  undefined1 auStack_40 [64];
  
  RtlEnterCriticalSection(param_1 + 0x720);
  if ((param_2 & 0xffffffff) == 0) {
    fn_83016D40(param_1 + 0x310);
  }
  else {
    fn_83016CE8(&iStack_50,param_1 + 0x310);
    uVar3 = uStack_4c;
joined_r0x83017224:
    uStack_4c = uVar3;
    if (puStack_48 != (undefined4 *)0x0) {
      while ((ulonglong)(uint)puStack_48[2] != (param_2 & 0xffffffff)) {
        puVar1 = (undefined4 *)*puStack_48;
        puStack_44 = puStack_48;
        while (puStack_48 = puVar1, puStack_48 == (undefined4 *)0x0) {
          uVar3 = uVar3 + 1;
          if (0xc0 < uVar3) goto joined_r0x83017224;
          puStack_44 = (undefined4 *)0x0;
          uStack_4c = uVar3;
          puVar1 = *(undefined4 **)(uVar3 * 4 + iStack_50);
        }
      }
      piVar2 = (int *)fn_830197E8(auStack_40,param_1 + 0x310,&iStack_50);
      iStack_50 = *piVar2;
      uVar3 = piVar2[1];
      puStack_48 = (undefined4 *)piVar2[2];
      puStack_44 = (undefined4 *)piVar2[3];
      goto joined_r0x83017224;
    }
  }
  for (puVar1 = *(undefined4 **)(param_1 + 0x6c0); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    (**(code **)(*(int *)puVar1[1] + 4))((int *)puVar1[1],0,param_2);
  }
  RtlLeaveCriticalSection(param_1 + 0x720);
  return;
}

