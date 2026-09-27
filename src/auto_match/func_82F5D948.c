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
extern unsigned int *auStack_120;
extern unsigned int *auStack_d0;
extern int fn_824B4288();
extern int fn_8263B758();
extern int fn_8263C7D8();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int iStack_11c;
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int lbl_82005328;
extern float lbl_82005CCC;
extern unsigned int lbl_8208DE08;
extern unsigned int lbl_820AA96C;
extern unsigned int lbl_82186E74;
extern unsigned int uStack_108;
extern unsigned int uStack_110;
extern unsigned int uStack_118;


void fn_82F5D948(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined1 auStack_120 [4];
  int iStack_11c;
  ulonglong uStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  longlong lStack_100;
  undefined1 auStack_d0 [24];
  int iStack_b8;
  int iStack_b4;
  
  lVar1 = fn_82F6A53C();
  if ((((param_2 & 0xffffffff) != 0) && ((param_3 & 0xffffffff) != 0)) &&
     ((param_4 & 0xffffffff) != 0)) {
    fn_8263B758(param_2,0,auStack_d0);
    fn_8263C7D8(param_2,0,auStack_120,0,0);
    if (iStack_b4 != 0) {
      iVar3 = 0;
      lVar2 = (ulonglong)(iStack_b4 - 1) / 6 + 1;
      do {
        iVar4 = 0;
        if (iStack_b8 != 0) {
          iVar5 = (iStack_b8 - 1U) / 6 + 1;
          do {
            iVar6 = iVar3 + iVar4;
            iVar4 = iVar4 + 6;
            pbVar7 = (byte *)(iVar6 * 4 + iStack_11c);
            uStack_118 = (ulonglong)pbVar7[2];
            uStack_110 = (ulonglong)*pbVar7;
            uStack_108 = (ulonglong)pbVar7[1];
            lStack_100 = (longlong)
                         (((float)uStack_110 * lbl_82005328 * lbl_820AA96C +
                          (float)uStack_118 * lbl_82005328 * lbl_82186E74 +
                          (float)uStack_108 * lbl_82005328 * lbl_8208DE08) * lbl_82005CCC);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        lVar2 = lVar2 + -1;
        iVar3 = iStack_b8 * 6 + iVar3;
      } while (lVar2 != 0);
    }
                    /* WARNING: Subroutine does not return */
    fn_824B4288(lVar1 + 0x11c,0x20);
  }
  fn_82F6A588();
  return;
}

