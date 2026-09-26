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
extern unsigned int *auStack_230;
extern unsigned int *auStack_240;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82D97698();
extern int fn_82D97748();
extern int fn_82D977A8();
extern unsigned int *lbl_8323B464;


undefined8 fn_82DED570(int *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [560];
  
  iVar1 = (**(code **)(*param_1 + 0x20))();
  if (iVar1 == 2) {
    *param_2 = param_1[0x2c];
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    if (iVar1 != 7) {
      *param_4 = 0;
      *param_3 = 0;
      *param_2 = 0;
      fn_82CEE578(auStack_240,auStack_230,0x200);
      fn_82CEDB38(auStack_240,0xffffffff821453ec);
      (**(code **)(*lbl_8323B464 + 0xc))
                (lbl_8323B464,1,0xffffffffabbae233,auStack_230,0xffffffff82145380,0x104);
                    /* WARNING: Subroutine does not return */
      fn_82CED958(auStack_240);
    }
    iVar1 = fn_82D97698(param_1);
    *param_2 = iVar1;
    uVar2 = fn_82D97748(param_1);
    *param_3 = uVar2;
    uVar2 = fn_82D977A8(param_1);
    *param_4 = uVar2;
  }
  return 0;
}

