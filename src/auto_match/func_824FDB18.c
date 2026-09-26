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
extern int fn_825200A8();
extern int fn_8255F8D0();
extern int fn_827F2D60();
extern int fn_827F6418();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_824FDB18(int param_1,int param_2,int param_3)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(int *)(param_1 + 0xb94) == 0) {
    iVar3 = *(int *)(*(int *)(param_2 + 0xd0) + 0x14) + param_3 * 0x44;
    uStack_20 = *(undefined4 *)(iVar3 + 0x18);
    iVar2 = fn_825200A8(&uStack_20,param_1 + 0xc);
    if (iVar2 != 0) {
      uStack_1c = *(undefined4 *)(iVar3 + 0x38);
      uStack_20 = 0;
      uVar1 = fn_8255F8D0((double)lbl_821CC160,(double)lbl_821CA460,&uStack_20);
      *(int *)(param_1 + 0xb80) = (int)uVar1;
      fn_827F6418(uVar1,0);
      fn_827F2D60((double)lbl_8218E8E8,*(undefined4 *)(param_1 + 0xb74),
                        *(undefined4 *)(param_1 + 0xb80));
      *(undefined4 *)(param_1 + 0xb94) = 1;
    }
  }
  return;
}

