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
extern int fn_82366AE8();
extern int fn_824CD030();
extern int fn_825604A0();


void fn_8242CFE0(int param_1,ulonglong param_2,undefined1 param_3,char param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30) >> 3;
  if ((((param_2 & 0xffffffff) < (ulonglong)uVar3) && (1 < uVar3)) &&
     (1 < (uint)(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2))) {
    piVar2 = *(int **)((int)((param_2 & 0xffffffff) << 2) + *(int *)(param_1 + 0x20));
    puVar1 = (undefined4 *)*piVar2;
    if (piVar2[1] - (int)puVar1 >> 2 != 0) {
      if ((param_4 == '\0') || (iVar4 = fn_824CD030(*puVar1), iVar4 != 0)) {
        fn_82366AE8(*(undefined4 *)
                           ((int)((param_2 & 0xffffffff) << 3) + *(int *)(param_1 + 0x30)),param_3);
      }
      else {
        iVar4 = *(int *)((int)((param_2 & 0xffffffff) << 3) + *(int *)(param_1 + 0x30));
        if (*(int *)(iVar4 + 0x22c) != 0) {
          fn_825604A0(iVar4 + 0x20);
          *(undefined4 *)(iVar4 + 0x22c) = 0;
        }
      }
    }
  }
  return;
}

