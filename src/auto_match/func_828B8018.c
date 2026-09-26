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
extern int fn_82231540();
extern int fn_828B6DD0();
extern int fn_828B9180();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_50;


void fn_828B8018(int param_1)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  undefined1 uStack_50;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    dVar3 = (double)lbl_821AAD20;
    do {
      dVar2 = (double)fn_828B9180(*puVar1);
      if (dVar2 <= dVar3) {
        fn_828B6DD0(puVar1 + 2,*(undefined4 *)(param_1 + 8),puVar1,uStack_50);
        fn_82231540((ulonglong)*(uint *)(param_1 + 8) - 8,(ulonglong)*(uint *)(param_1 + 8),
                          param_1 + 0x10,uStack_50);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
      }
      else {
        puVar1 = puVar1 + 2;
      }
    } while (puVar1 != *(undefined4 **)(param_1 + 8));
  }
  return;
}

