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
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822FB850();
extern int fn_82359C18();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821AE1F0;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


undefined4 *
fn_822EAAC8(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined **ppuStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined ***pppuStack_90;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  param_1[1] = 1;
  *param_1 = &lbl_821A8D8C;
  param_1[2] = 1;
  if (param_1 + 4 != (undefined4 *)0x0) {
    uStack_9c = *param_7;
    uStack_98 = param_7[1];
    pppuStack_90 = &ppuStack_a0;
    uStack_94 = param_7[2];
    ppuStack_a0 = &lbl_821AE1F0;
    fn_82230110(auStack_60,*param_5);
    fn_82230110(auStack_80,*param_2);
    fn_822FB850(param_1 + 4,auStack_80,param_3,param_4,auStack_60,*param_6,&ppuStack_a0);
    fn_82230300(auStack_80,1,0);
    fn_82230300(auStack_60,1,0);
    fn_82359C18(&ppuStack_a0);
  }
  return param_1;
}

