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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82637300();
extern int fn_82F65390();
extern int fn_82F68CC0();
extern unsigned int uStack_40;


void fn_82635F08(int param_1,undefined4 param_2,longlong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  char *pcVar5;
  ulonglong uVar4;
  longlong lVar6;
  longlong lVar7;
  undefined8 uStack_40;
  
  iVar3 = fn_82F65390(param_3,0xffffffff821cc068,0xe);
  lVar6 = param_3;
  if (iVar3 == 0) {
    param_3 = param_3 + 10;
    lVar6 = param_3;
  }
  do {
    pcVar5 = (char *)param_3;
    param_3 = param_3 + 1;
  } while (*pcVar5 != '\0');
  uVar4 = (param_3 - lVar6) - 1;
  uVar2 = uVar4 & 0xffffffff;
  uStack_40 = CONCAT44(param_2,(int)uVar4);
  lVar7 = ((uVar2 + 3 & 0xffffffff) >> 2) + 2;
  fn_82637300((int *)(param_1 + 0x4dd0),lVar7,param_1 + 0x4dbc);
  if (-1 < *(int *)(param_1 + 0x4dbc)) {
    puVar1 = *(undefined8 **)(param_1 + 0x4dd0);
    *(undefined4 *)((int)puVar1 + (int)lVar7 * 4 + -4) = 0;
    *puVar1 = uStack_40;
    fn_82F68CC0(puVar1 + 1,lVar6,uVar2);
  }
  return;
}

