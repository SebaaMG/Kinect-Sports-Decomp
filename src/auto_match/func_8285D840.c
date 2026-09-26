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
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_82810280();
extern int fn_82810328();
extern int fn_828116B8();
extern int fn_8285A980();
extern int fn_8285ABD8();
extern int fn_8285C670();
extern int fn_8285C730();
extern int fn_8285CA00();
extern int fn_8285D6E8();
extern int fn_82862A60();
extern int iRam832115a8;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8321157C;
extern unsigned int lbl_83211580;
extern unsigned int lbl_83211584;
extern unsigned int lbl_83211588;
extern unsigned int lbl_8321158C;
extern unsigned int lbl_8321159C;
extern unsigned int lbl_832115A6;


undefined8
fn_8285D840(int param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5,
             undefined8 param_6)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  double dVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [88];
  
  iVar1 = fn_828116B8(lbl_8321159C,*(undefined4 *)(param_1 + 0x44));
  if ((iVar1 == 0) && (iVar1 = fn_8285ABD8(param_2,lbl_8321157C), iVar1 != 0)) {
    fn_8285A980((double)lbl_83211584,*(undefined4 *)(param_2 + 0x14),
                      *(undefined2 *)(param_2 + 0x18),lbl_83211580);
    fn_82810328(0xffffffff83211528,lbl_8321158C,auStack_58);
    dVar4 = (double)fn_82810280(param_3,auStack_58);
    if (((double)lbl_821AAD20 <= dVar4) &&
       ((lbl_832115A6 == '\0' ||
        (cVar2 = fn_82862A60(0xffffffff832115b0,param_3,lbl_8321158C,auStack_60),
        cVar2 != '\0')))) {
      uVar3 = *(ushort *)(param_2 + 0x18);
      iVar1 = 1;
      if (1 < uVar3) {
        do {
          fn_8285A980((double)lbl_83211584,*(undefined4 *)(param_2 + 0x14),uVar3,lbl_83211580)
          ;
          uVar3 = *(ushort *)(param_2 + 0x18);
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)(uint)uVar3);
      }
      lbl_83211588 = uVar3;
      iVar1 = fn_8285C670((double)*(float *)(param_2 + 0x10),0xffffffff832114c8,6,param_2 + 4);
      if ((iVar1 != 2) &&
         ((iVar1 != 1 ||
          ((iVar1 = fn_8285C730(0xffffffff832114c8,6,lbl_8321158C,lbl_83211588,param_5),
           iVar1 != 2 &&
           ((iVar1 != 1 ||
            ((iRam832115a8 != 0 &&
             (iVar1 = fn_8285D6E8((double)*(float *)(iRam832115a8 + 8),0xffffffff832114c8,6,
                                    lbl_8321158C,lbl_83211588), iVar1 == 0)))))))))) {
        if (((*(int *)(param_4 + 0x40) != 0) &&
            (iVar1 = *(int *)(*(int *)(param_4 + 0x40) + 0x44), iVar1 != 0)) &&
           (iVar1 = fn_8285CA00(param_2,iVar1,param_6), iVar1 != 0)) {
          return 0;
        }
        return 1;
      }
      return 2;
    }
  }
  return 0;
}

