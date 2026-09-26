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
#define NAN(x) ((x) != (x))
extern int fn_82563688();
extern int fn_827F6310();
extern int fn_827F6428();
extern int fn_827F6430();
extern unsigned int lbl_8218E68C;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82563578(undefined8 param_1,undefined8 param_2,ushort *param_3,ulonglong param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  
  if ((param_4 & 0xffffffff) != 0) {
    uVar5 = fn_827F6428();
    dVar6 = (double)fn_827F6310(param_1);
    dVar4 = (double)lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar6 < dVar4) << 2) | (uint)(NAN(dVar6) || NAN(dVar4)) << 2)) <
        0.0) {
      dVar4 = (double)lbl_821CA460;
    }
    fn_827F6430(dVar4,param_1);
    puVar2 = param_3 + 6;
    uVar1 = *puVar2;
    while (uVar1 != 0) {
      if (*puVar2 < 0x32) {
        uVar3 = *(uint *)(&lbl_8218E68C + (uint)*puVar2 * 0xc);
      }
      else {
        uVar3 = 0;
      }
      if (((param_3[7] | uVar3) & 1) != 0) {
        fn_82563688(param_1,param_2,param_3,param_4,param_5);
      }
      param_3 = (ushort *)((uint)*param_3 + (int)param_3);
      puVar2 = param_3 + 6;
      uVar1 = param_3[6];
    }
    fn_827F6430(uVar5,param_1);
  }
  return;
}

