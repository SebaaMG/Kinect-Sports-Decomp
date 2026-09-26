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
extern int fn_823AB478();
extern int fn_824B71A8();
extern int fn_82512508();
extern int fn_828EA5F8();
extern int fn_828EA610();
extern int fn_828EA840();
extern unsigned int lbl_83265988;


void fn_82407968(undefined8 param_1,int param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  char cVar5;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar6;
  longlong lVar7;
  
  iVar1 = lbl_83265988;
  if ((((lbl_83265988 != 0) && (cVar5 = fn_828EA610(lbl_83265988), cVar5 == '\0')) &&
      (cVar5 = fn_828EA5F8(iVar1), cVar5 != '\0')) &&
     (cVar5 = fn_82512508(iVar1), cVar5 != '\0')) {
    lVar7 = 0;
    iVar2 = -1;
    iVar3 = -1;
    if (*(int *)(param_3 + 0x24) != 0) {
      iVar4 = *(int *)(*(int *)(param_3 + 0x24) + 0x34);
      lVar7 = 1;
      if (((iVar4 != 0) && (cVar5 = fn_828EA840(iVar4), cVar5 != '\0')) &&
         (cVar5 = fn_828EA5F8(iVar4), cVar5 != '\0')) {
        iVar2 = fn_823AB478(iVar4);
      }
    }
    if (*(int *)(param_4 + 0x24) != 0) {
      iVar4 = *(int *)(*(int *)(param_4 + 0x24) + 0x34);
      lVar7 = lVar7 + 1;
      if (((iVar4 != 0) && (cVar5 = fn_828EA840(iVar4), cVar5 != '\0')) &&
         (cVar5 = fn_828EA5F8(iVar4), cVar5 != '\0')) {
        iVar3 = fn_823AB478(iVar4);
      }
    }
    bVar6 = param_2 == param_3;
    iVar4 = fn_823AB478(iVar1);
    if (iVar2 != iVar4) {
      if (iVar3 != iVar4) {
        return;
      }
      bVar6 = !bVar6;
    }
    fn_824B71A8(iVar1,param_5,lVar7,param_1,bVar6);
  }
  return;
}

