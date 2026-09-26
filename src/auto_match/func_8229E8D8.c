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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82279C58();
extern int fn_8266F628();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;


void fn_8229E8D8(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  
  iVar1 = *param_1;
  uVar7 = 0;
  uVar4 = param_1[1] - iVar1 >> 2;
  if (uVar4 != 0) {
    iVar6 = 0;
    do {
      puVar3 = *(undefined4 **)(iVar6 + iVar1);
      piVar2 = (int *)fn_82279C58(auStack_50,*puVar3);
      iVar1 = *piVar2;
      if (iStack_4c != 0) {
        fn_822315A0(iStack_4c);
      }
      if (iVar1 != 0) {
        if (((uint)LZCOUNT((uVar4 - 1) - uVar7) >> 5 == 0) || (uVar5 = 0, puVar3[0x104] != 0)) {
          uVar5 = 1;
        }
        puVar3 = (undefined4 *)fn_82279C58(auStack_48,*puVar3);
        fn_8266F628(*puVar3,uVar5);
        if (iStack_44 != 0) {
          fn_822315A0();
        }
      }
      iVar1 = *param_1;
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + 4;
      uVar4 = param_1[1] - iVar1 >> 2;
    } while (uVar7 < uVar4);
  }
  return;
}

