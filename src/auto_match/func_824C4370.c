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
extern unsigned int *auStack_40;
extern int fn_824C04E0();
extern int fn_8251CF80();
extern int fn_82520158();
extern int fn_8256BF18();
extern unsigned int lbl_832766F7;
extern unsigned int uRam832766f1;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_824C4370(int param_1)

{
  int iVar1;
  undefined4 auStack_40 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uRam832766f1 = 0;
  if (lbl_832766F7 != '\0') {
    fn_82520158(0xffffffff821bd350,auStack_40,0);
    iVar1 = fn_8256BF18();
    *(undefined4 *)(iVar1 + 0x68) = auStack_40[0];
  }
  fn_824C04E0(*(undefined4 *)(param_1 + 4),1);
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  fn_8251CF80(param_1 + 8,0,&uStack_30);
  return;
}

