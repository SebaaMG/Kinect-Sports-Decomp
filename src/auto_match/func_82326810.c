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
extern unsigned int *auStack_30;
extern int fn_82522ED8();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827F6328();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


double fn_82326810(int param_1)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_30 [48];
  
  fn_8255F880(auStack_30,param_1 + 0x40);
  puVar1 = (undefined4 *)fn_8255F8D0((double)lbl_821CC160,(double)lbl_821CA460,auStack_30);
  dVar3 = (double)*(float *)(param_1 + 0x48);
  dVar2 = (double)fn_827F6328();
  dVar2 = (double)(float)(dVar2 * (double)(float)((double)lbl_821CA460 / dVar3));
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,0);
    fn_82522ED8(puVar1);
  }
  return dVar2;
}

