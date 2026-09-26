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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_82C07E78();
extern int fn_82C10630();
extern int fn_82C107F8();
extern int fn_82C10950();
extern int fn_82C10E58();
extern int fn_82C10EC0();
extern int fn_82C10F40();
extern int fn_82C11160();
extern int fn_82C11FF8();
extern int fn_82C12520();
extern unsigned int iStack_7c;
extern unsigned int iStack_88;
extern unsigned int iStack_8c;


ulonglong fn_82C08290(int param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  undefined1 *puStack_90;
  int iStack_8c;
  int iStack_88;
  int *piStack_84;
  undefined1 auStack_80 [4];
  int iStack_7c;
  char *pcStack_78;
  char *pcStack_74;
  char *pcStack_70;
  undefined1 auStack_60 [96];
  
  iStack_8c = 0;
  piStack_84 = (int *)0x0;
  puStack_90 = (undefined1 *)0x0;
  uVar1 = fn_82C10F40(*(undefined4 *)(*(int *)(param_1 + 4) + 0x7c),param_2,&iStack_88);
  if ((-1 < (int)uVar1) &&
     ((uVar1 = fn_82C10F40(*(undefined4 *)(param_1 + 0x238),param_2,&puStack_90),
      (uVar1 & 0xffffffff) == 0x80500016 || (-1 < (int)uVar1)))) {
    if (puStack_90 != (undefined1 *)0x0) {
      fn_82C10F40(*(undefined4 *)(param_1 + 0x23c),param_2,&iStack_8c);
      if (iStack_8c != 0) {
        uVar1 = fn_82C11160();
        if ((int)uVar1 < 0) goto LAB_82c08528;
        iStack_8c = 0;
        fn_82C10EC0(*(undefined4 *)(param_1 + 0x23c),param_2);
      }
      fn_82C10EC0(*(undefined4 *)(param_1 + 0x238),param_2);
      puStack_90 = (undefined1 *)0x0;
    }
    uVar1 = fn_82C10E58(*(undefined4 *)(param_1 + 0x238),param_2,&puStack_90);
    if (-1 < (int)uVar1) {
      *puStack_90 = (char)param_2;
      *(undefined4 *)(puStack_90 + 0x20) = *(undefined4 *)(iStack_88 + 4);
      uVar1 = fn_82C11FF8(*(undefined4 *)(param_1 + 0x260),&iStack_8c);
      if (-1 < (int)uVar1) {
        if (param_3 != 0) {
          pcStack_74 = (char *)0x0;
          pcStack_70 = "passthru";
          pcStack_78 = "WMFDecodeX86";
          if (*(int *)(iStack_88 + 4) == 1) {
            pcStack_74 = "-acodec";
          }
          else if (*(int *)(iStack_88 + 4) == 2) {
            pcStack_74 = "-vcodec";
          }
          uVar1 = fn_82C10950(*(undefined4 *)(param_1 + 0x260),3,&pcStack_78);
          if ((int)uVar1 < 0) goto LAB_82c08528;
        }
        uVar1 = fn_82C12520(iStack_8c,iStack_88,*(undefined4 *)(param_1 + 0x220),
                                  *(undefined4 *)(*(int *)(param_1 + 4) + 0x78),
                                  *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x260),
                                  puStack_90 + 0x40,puStack_90 + 0x44);
        if ((-1 < (int)uVar1) &&
           (uVar1 = fn_82C10630(*(undefined4 *)(param_1 + 0x260),0xffffffff82c07f20,puStack_90,
                                 puStack_90 + 0x3c), -1 < (int)uVar1)) {
          *(int *)(puStack_90 + 0x48) = param_1;
          *(undefined4 *)(puStack_90 + 0x38) = 1;
          *(undefined4 *)(puStack_90 + 0x4c) = 0;
          uVar1 = fn_82C07E78(iStack_88,*(undefined4 *)(puStack_90 + 0x3c),auStack_60);
          if ((-1 < (int)uVar1) &&
             ((uVar1 = fn_82C107F8(*(undefined4 *)(param_1 + 0x260),
                                         *(undefined4 *)(puStack_90 + 0x40),0x80000,auStack_60),
              -1 < (int)uVar1 &&
              (uVar1 = fn_82C10E58(*(undefined4 *)(param_1 + 0x23c),param_2,&piStack_84),
              -1 < (int)uVar1)))) {
            *piStack_84 = iStack_8c;
            iStack_7c = iStack_8c;
            auStack_80[0] = (char)param_2;
            uVar1 = fn_82C107F8(*(undefined4 *)(param_1 + 0x260),4,0x20050,auStack_80);
            if (-1 < (int)uVar1) {
              return uVar1;
            }
          }
        }
      }
    }
  }
LAB_82c08528:
  if (iStack_8c != 0) {
    fn_82C10EC0(*(undefined4 *)(param_1 + 0x23c),param_2);
  }
  return uVar1;
}

