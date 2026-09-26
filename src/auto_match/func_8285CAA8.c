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
extern int fn_828116B8();
extern int fn_8285A980();
extern int fn_8285ABD8();
extern int fn_8285CA00();
extern int fn_82862A60();
extern unsigned int lbl_8321157C;
extern unsigned int lbl_83211580;
extern unsigned int lbl_83211584;
extern unsigned int lbl_83211588;
extern unsigned int lbl_8321158C;
extern unsigned int lbl_8321159C;


undefined8
fn_8285CAA8(int param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5,
             undefined8 param_6)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  
  iVar1 = fn_828116B8(lbl_8321159C,*(undefined4 *)(param_1 + 0x44));
  if ((iVar1 == 0) && (iVar1 = fn_8285ABD8(param_2,lbl_8321157C), iVar1 != 0)) {
    fn_8285A980((double)lbl_83211584,*(undefined4 *)(param_2 + 0x14),
                      *(undefined2 *)(param_2 + 0x18),lbl_83211580);
    cVar2 = fn_82862A60(0xffffffff832115b0,param_3,lbl_8321158C,param_6);
    if (cVar2 != '\0') {
      uVar3 = *(ushort *)(param_2 + 0x18);
      if (1 < uVar3) {
        uVar4 = 1;
        do {
          fn_8285A980((double)lbl_83211584,*(undefined4 *)(param_2 + 0x14),uVar3,lbl_83211580)
          ;
          uVar4 = uVar4 + 1;
          uVar3 = *(ushort *)(param_2 + 0x18);
        } while (uVar4 < uVar3);
      }
      lbl_83211588 = uVar3;
      if (((*(int *)(param_4 + 0x40) != 0) &&
          (iVar1 = *(int *)(*(int *)(param_4 + 0x40) + 0x44), iVar1 != 0)) &&
         (iVar1 = fn_8285CA00(param_2,iVar1,param_5), iVar1 != 0)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

