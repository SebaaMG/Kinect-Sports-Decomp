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
extern int fn_8251FA58();
extern int fn_825503E0();
extern int fn_8265CA20();
extern int fn_82674F60();
extern int fn_82674FB8();
extern int fn_8267C488();
extern int fn_82872E60();
extern unsigned int lbl_82002B68;
extern unsigned int lbl_82002D80;


void fn_82675308(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *apuStack_30 [12];
  
  *param_1 = &lbl_82002D80;
  if (param_1[8] != 0) {
    fn_8251FA58();
    param_1[8] = 0;
  }
  if (param_1[9] != 0) {
    fn_8251FA58();
    param_1[9] = 0;
  }
  puVar1 = (undefined4 *)param_1[5];
  apuStack_30[0] = (undefined4 *)*puVar1;
  while (apuStack_30[0] != puVar1) {
    puVar1 = (undefined4 *)apuStack_30[0][10];
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    fn_825503E0(apuStack_30);
    puVar1 = (undefined4 *)param_1[5];
  }
  fn_82674F60(param_1 + 4);
  fn_8251FA58(param_1[3]);
  param_1[3] = 0;
  fn_82872E60(param_1 + 10);
  fn_82674FB8(apuStack_30,param_1 + 4,*(undefined4 *)param_1[5]);
  fn_8265CA20(param_1[5]);
  *param_1 = &lbl_82002B68;
  fn_8267C488(param_1);
  return;
}

