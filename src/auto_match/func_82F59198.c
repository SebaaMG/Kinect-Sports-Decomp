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
extern int fn_82F5D3D8();
extern int fn_82F5DEE0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82F59198(int param_1)

{
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (*(char *)(param_1 + 4) != '\0') {
    if (*(int *)(param_1 + 0x24) == 1) {
      uStack_2c = *(undefined4 *)(param_1 + 8);
      uStack_38 = *(undefined4 *)(param_1 + 0x18);
      uStack_34 = *(undefined4 *)(param_1 + 0x1c);
      uStack_30 = *(undefined4 *)(param_1 + 0x20);
      uStack_28 = *(undefined4 *)(param_1 + 0x10);
      uStack_40 = (uint)(*(char *)(param_1 + 5) == '\0');
      uStack_3c = *(undefined4 *)(param_1 + 0x14);
      uStack_18 = lbl_82002AE0;
      uStack_24 = lbl_821AAD20;
      uStack_20 = lbl_821AAD20;
      uStack_1c = lbl_82002AE0;
      fn_82F5DEE0(param_1 + 0x28,&uStack_40);
    }
    else if (*(int *)(param_1 + 0x24) == 2) {
      fn_82F5D3D8(param_1 + 0x9c,param_1 + 0x28);
    }
  }
  return;
}

