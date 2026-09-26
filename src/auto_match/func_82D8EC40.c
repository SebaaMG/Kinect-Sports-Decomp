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
extern int fn_82D7C4B0();
extern int fn_82D7D360();
extern int fn_82DB0258();
extern int fn_83089DB0();


void fn_82D8EC40(undefined8 param_1,int param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar3;
  int iVar4;
  longlong lVar2;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  piVar3 = (int *)fn_83089DB0(param_2 + 0x10);
  iVar5 = 0;
  if (0 < piVar3[1]) {
    iVar6 = 0;
    do {
      puVar8 = (undefined4 *)(*piVar3 + iVar6);
      iVar7 = (int)*(char *)(puVar8[1] + 0x10) + puVar8[1];
      lVar2 = param_3;
      if (*(char *)(iVar7 + 0xe8) == '\x05') {
LAB_82d8ecd4:
        uVar1 = *puVar8;
        fn_82D7D360(lVar2,uVar1);
        fn_82D7C4B0(param_1,uVar1);
      }
      else if ((param_4 == 5) &&
              (iVar4 = fn_82DB0258(*puVar8,*(undefined4 *)(param_2 + 0xcc),
                                         *(undefined4 *)(iVar7 + 0xcc)),
              iVar4 == *(int *)(param_2 + 0xcc))) {
        lVar2 = (ulonglong)*(uint *)(iVar7 + 0xcc) + 0x58;
        goto LAB_82d8ecd4;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 8;
    } while (iVar5 < piVar3[1]);
  }
  return;
}

