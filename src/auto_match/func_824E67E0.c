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
extern int fn_82576478();
extern int fn_8265C9E0();
extern unsigned int lbl_821C1474;
extern unsigned int lbl_821CA460;


undefined4 fn_824E67E0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_2 + 0x14) == 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x93c);
    puVar2 = (undefined4 *)fn_8265C9E0(0x80);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[1] = puVar1;
      *puVar2 = &lbl_821C1474;
      puVar2[5] = lbl_821CA460;
      if (puVar1 == (undefined4 *)0x0) {
        puVar2[2] = 0;
      }
      else {
        puVar2[2] = *puVar1;
      }
      puVar2[3] = 0;
    }
    *(undefined4 **)(param_2 + 0x14) = puVar2;
    fn_82576478(puVar1);
  }
  return *(undefined4 *)(param_2 + 0x14);
}

