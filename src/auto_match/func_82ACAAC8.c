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
extern int fn_82ABE190();


longlong fn_82ACAAC8(undefined8 param_1,int *param_2,ulonglong param_3,int *param_4,uint param_5,
                      undefined1 *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  longlong lVar6;
  
  iVar1 = *param_2;
  lVar6 = 0;
  do {
    if (iVar1 == 0) {
      *param_4 = *param_4 - ((uint)param_2[2] >> 0xe & 7);
      return lVar6 - ((ulonglong)((uint)param_2[2] >> 0xe) & 7);
    }
    cVar5 = fn_82ABE190(iVar1);
    if ((cVar5 != '\0') &&
       (iVar2 = *(int *)(iVar1 + 0xc), (*(uint *)(iVar2 + 8) & 0x3f80) != 0x3c00)) {
      if (*(int *)(iVar2 + 0x1c) == param_2[7]) {
        if (((*(uint *)(iVar2 + 0x14) & 0x1e000) != 0) &&
           ((*(uint *)(iVar2 + 0x14) >> 0x11 & 0xff) == param_5)) {
          *param_6 = 1;
        }
      }
      for (iVar3 = *param_2; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
        if (iVar3 == iVar1) goto LAB_82acab8c;
        cVar5 = fn_82ABE190(iVar3);
        if ((cVar5 != '\0') && (*(int *)(iVar3 + 0xc) == iVar2)) break;
      }
      if (iVar3 == iVar1) {
LAB_82acab8c:
        for (iVar3 = *(int *)(iVar2 + 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
          piVar4 = *(int **)(iVar3 + 0x10);
          if ((piVar4 != (int *)0x0) && (piVar4 != param_2)) {
            if ((((uint)piVar4[2] >> 0x1a & 1) != 0) && ((piVar4[2] & 0x3f80U) != 0x3800)) {
              if ((((ulonglong)((uint)piVar4[5] >> 5) |
                   (ulonglong)(uint)piVar4[4] & 0xfffffffff8000000) >> 0x14 & 0x7ff) ==
                  (param_3 & 0xffffffff)) goto LAB_82acabf0;
            }
          }
        }
        lVar6 = ((ulonglong)(*(uint *)(iVar2 + 8) >> 0xe) & 7) + lVar6;
LAB_82acabf0:
        *param_4 = (*(uint *)(iVar2 + 8) >> 0xe & 7) + *param_4;
      }
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}

