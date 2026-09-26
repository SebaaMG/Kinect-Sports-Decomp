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
extern unsigned int *auStack_80;
extern int fn_8226B6A8();
extern int fn_8226CA38();
extern int fn_82275128();
extern int fn_822811F8();
extern int fn_82F68CC0();
extern unsigned int lbl_821954C8;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_82280E28(int param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined1 auStack_80 [112];
  
  fn_8226B6A8(*(undefined4 *)(param_1 + 0x7c));
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x84);
  if (uVar4 != 0) {
    fn_822811F8(auStack_80);
    fn_82F68CC0(uVar4 + 0x38,auStack_80,0x70);
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar2 = fn_82275128();
    iVar2 = *(int *)(*(int *)(iVar2 + 8) * 4 + iVar2);
    if (iVar2 == 0) {
      return;
    }
    if ((*(char *)(iVar2 + 0x41) == '\0') || (bVar1 = true, *(char *)(iVar2 + 0x42) == '\0')) {
      bVar1 = false;
    }
    if (bVar1) {
      uStack_88 = *(undefined8 *)(iVar2 + 0x24);
      cVar3 = fn_8226CA38(*(undefined4 *)(param_1 + 0x7c),&uStack_88,&uStack_90);
      if (cVar3 != '\0') {
        *(ulonglong *)(*(int *)(param_1 + 0x84) + 0xa8) = CONCAT44(uStack_90,uStack_8c);
        return;
      }
    }
    *(ulonglong *)(*(int *)(param_1 + 0x84) + 0xa8) = CONCAT44(lbl_821954C8,lbl_821954C8);
    return;
  }
  return;
}

