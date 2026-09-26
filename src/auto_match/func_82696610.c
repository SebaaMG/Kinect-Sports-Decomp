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
extern int fn_826828D8();
extern int fn_826959C8();
extern int fn_82695FA0();
extern int fn_826ADE60();
extern unsigned int lbl_8200579C;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


undefined8 fn_82696610(char *param_1,int *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  byte abStack_50 [16];
  undefined **ppuStack_40;
  byte *pbStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if ((*param_1 == '\t') && (param_2 != (int *)0x0)) {
    iVar1 = *(int *)(param_1 + 4);
    if (*(int *)(iVar1 + 0x10) != 0) {
      pbStack_3c = abStack_50;
      abStack_50[0] = 0;
      uStack_2c = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      ppuStack_40 = &lbl_8200579C;
      uStack_38 = param_3;
      piStack_28 = param_2;
      (**(code **)(**(int **)(iVar1 + 0x10) + 0x28))
                (*(int **)(iVar1 + 0x10),&ppuStack_40,*(undefined4 *)(iVar1 + 0x14),0);
      fn_826828D8(&ppuStack_40);
      fn_82695FA0(param_4,abStack_50);
      if (4 < abStack_50[0]) {
        fn_826959C8(abStack_50);
      }
      return 1;
    }
    cVar2 = (**(code **)(*param_2 + 4))(param_2);
    if (cVar2 != '\0') {
      fn_826ADE60(param_2,0xffffffff82006184);
    }
  }
  return 0;
}

