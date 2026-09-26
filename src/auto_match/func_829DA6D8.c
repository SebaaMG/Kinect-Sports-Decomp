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
extern int fn_829D3FE8();
extern int fn_829D5A08();
extern unsigned int lbl_83215058;
extern unsigned int lbl_83217148;
extern unsigned int lbl_832179FC;


undefined8 fn_829DA6D8(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int aiStack_50 [20];
  
  if (((param_3 & 0xfffffffe) == 0 && (param_3 & 0xffffffde) == 0) && ((param_3 & 1) != 0)) {
    if ((((param_3 & 0x20) == 0) || (((param_2 & 0xffffffff) < 8 || ((int)param_2 == -2)))) &&
       (((param_3 & 0x10) == 0 || ((param_4 & 0xffffffff) != 0)))) {
      if ((lbl_83217148 != 0) && (lbl_832179FC != 0)) {
        if (lbl_83215058 == 0) {
          return 0xffffffff8007048f;
        }
        iVar4 = lbl_832179FC + 0x24980;
        RtlEnterCriticalSection(iVar4);
        iVar1 = lbl_832179FC;
        aiStack_50[0] = 0;
        cVar2 = fn_829D3FE8(param_1,lbl_832179FC,aiStack_50);
        if (cVar2 == '\0') {
          uVar5 = 0xffffffff83010008;
        }
        else {
          iVar3 = aiStack_50[0] * 0x150 + iVar1;
          if (*(int *)(iVar3 + 0x200) == -1) {
            uVar5 = 0xffffffff8301000c;
          }
          else if ((((param_3 & 0x20) == 0) || (8 < (param_2 & 0xffffffff))) ||
                  (*(int *)((int)param_2 * 0x18 + iVar1) != 0)) {
            uVar5 = fn_829D5A08(2,iVar1,iVar3 + 0xc0,aiStack_50[0],param_1,param_2,param_3,param_4
                                 );
          }
          else {
            uVar5 = 0xffffffff80070057;
          }
        }
        RtlLeaveCriticalSection(iVar4);
        return uVar5;
      }
      return 0xffffffff83010005;
    }
  }
  return 0xffffffff80070057;
}

