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
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_8266FA50();
extern int fn_8266FAC8();
extern int fn_8266FB20();
extern unsigned int lbl_82195518;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_822CC748(undefined4 *param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double dStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double dStack_38;
  
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  fn_8266FA50(*param_1,&uStack_40,0xffffffff821ad1e0);
  fn_8266FA50(*param_1,&uStack_50,0xffffffff821ad1f4);
  dVar2 = lbl_82195518;
  dVar3 = (double)lbl_821CC160;
  if (dStack_38 == lbl_82195518) {
    *param_2 = lbl_821CC160;
  }
  else {
    dVar1 = (double)fn_8266FAC8(*param_1);
    *param_2 = (float)(dStack_38 / dVar1);
  }
  if (dStack_48 == dVar2) {
    param_2[1] = (float)dVar3;
  }
  else {
    dVar2 = (double)fn_8266FB20(*param_1);
    param_2[1] = (float)(dStack_48 / dVar2);
  }
  fn_82273C88(&uStack_50);
  fn_82273C88(&uStack_40);
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

