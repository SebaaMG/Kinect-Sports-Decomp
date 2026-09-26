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
extern int fn_82ABDD90();
extern int fn_82B837F8();


void fn_82B17758(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  
  puVar7 = (uint *)(param_2 + 4);
  do {
    puVar1 = (uint *)*puVar7;
    if (puVar1 == (uint *)0x0) {
      return;
    }
    uVar2 = puVar1[4];
    if ((uVar2 != 0) && ((*puVar1 & 0xe000000) != 0)) {
      uVar3 = *(uint *)(uVar2 + 8);
      uVar6 = uVar3 >> 7 & 0x7f;
      if (4 < uVar6) {
        if ((uVar6 < 9) || (uVar6 == 0x37)) {
LAB_82b17810:
          fn_82B837F8(param_1,param_2,puVar1,param_3,param_4,param_5);
        }
        else if (uVar6 == 0x67) {
          iVar4 = fn_82ABDD90(param_1,0x67,*(uint *)(param_2 + 8) >> 0x13 & 7,0);
          iVar5 = fn_82ABDD90(param_1,0x67,uVar3 >> 0x13 & 7,0);
          if (*(int *)(iVar5 + (uVar2 - 4)) == *(int *)(iVar4 + param_2 + -4)) goto LAB_82b17810;
        }
      }
    }
    if ((uint *)*puVar7 == puVar1) {
      puVar7 = puVar1 + 2;
    }
  } while( true );
}

