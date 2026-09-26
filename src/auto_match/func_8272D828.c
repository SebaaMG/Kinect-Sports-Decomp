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
extern int fn_8268CC00();
extern int fn_8268D008();
extern int fn_8269A240();
extern int fn_827A1070();
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8272D828(int *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  iVar1 = (**(code **)(*param_1 + 0x40))();
  if (iVar1 != 0) {
    if (param_2 < 4) {
      iVar1 = param_2 * 0x24 + iVar1 + 0x944;
    }
    else {
      iVar1 = 0;
    }
    uStack_4c = *(undefined4 *)(iVar1 + 0x18);
    uStack_50 = *(undefined4 *)(iVar1 + 0x14);
    fn_8268CC00(auStack_40);
    fn_8269A240(param_1,auStack_40);
    fn_8268D008(auStack_40,&uStack_48,&uStack_50);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = uStack_48;
      param_3[1] = uStack_44;
    }
    fn_827A1070(param_1[0x28]);
  }
  return;
}

