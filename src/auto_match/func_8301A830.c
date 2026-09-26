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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_8301B1E8();
extern int fn_83034920();
extern int fn_83034A58();
extern unsigned int lbl_831BC768;


undefined4 * fn_8301A830(int param_1,uint param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar3 = *(undefined4 **)((param_2 % 0xc1 + 10) * 4 + param_1);
  do {
    if (puVar3 == (undefined4 *)0x0) {
LAB_8301a888:
      uVar2 = fn_82FA5060(lbl_831BC768,0x60);
      if ((uVar2 & 0xffffffff) != 0) {
        puVar3 = (undefined4 *)fn_83034A58(uVar2,param_2);
        if (puVar3 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        iVar4 = fn_83034920();
        if ((iVar4 == 1) &&
           (puVar5 = (undefined4 *)fn_8301B1E8(param_1 + 0x24,param_2),
           puVar5 != (undefined4 *)0x0)) {
          *puVar5 = puVar3;
          return puVar3;
        }
        uVar1 = lbl_831BC768;
        (**(code **)*puVar3)(puVar3,0);
        fn_82FA5190(uVar1,puVar3);
      }
      return (undefined4 *)0x0;
    }
    if (puVar3[1] == param_2) {
      if (puVar3 + 2 != (undefined4 *)0x0) {
        return (undefined4 *)puVar3[2];
      }
      goto LAB_8301a888;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}

