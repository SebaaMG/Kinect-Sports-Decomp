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
extern unsigned int lbl_831C0BCC;
extern unsigned int lbl_831C0BD0;


undefined4 fn_82587AC0(byte *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  
  if (lbl_831C0BCC != 0) {
    lVar3 = 0;
    lVar4 = (ulonglong)lbl_831C0BD0 - 1;
    if (-1 < lVar4) {
      do {
        iVar1 = (int)lVar3 + (int)lVar4 >> 1;
        pbVar7 = *(byte **)(iVar1 * 0xc + lbl_831C0BCC);
        uVar5 = (ulonglong)*pbVar7;
        uVar6 = (ulonglong)*param_1;
        if (uVar5 == *param_1) {
          iVar2 = (int)param_1 - (int)pbVar7;
          do {
            pbVar7 = pbVar7 + 1;
            if (uVar5 == 0) goto LAB_82587b60;
            uVar5 = (ulonglong)*pbVar7;
            uVar6 = (ulonglong)pbVar7[iVar2];
          } while (uVar5 == uVar6);
        }
        if ((longlong)(uVar5 - uVar6) < 0) {
          lVar3 = (longlong)iVar1 + 1;
        }
        else {
          if ((int)(uVar5 - uVar6) < 1) {
LAB_82587b60:
            return *(undefined4 *)(iVar1 * 0xc + lbl_831C0BCC + 4);
          }
          lVar4 = (longlong)iVar1 + -1;
        }
      } while ((int)lVar3 <= (int)lVar4);
    }
  }
  return 0;
}

