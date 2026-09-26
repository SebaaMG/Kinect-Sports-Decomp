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
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822B91F8();
extern int fn_822B9390();
extern int fn_8234C258();
extern int fn_8234C320();
extern int fn_823ABE98();
extern int fn_8265C9E0();


undefined4 * fn_822E64E0(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 auStack_60 [96];
  
  cVar3 = (param_4 == 0) + ' ';
  uVar1 = fn_8265C9E0(0x80);
  if ((uVar1 & 0xffffffff) == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)
             fn_823ABE98(param_1,uVar1,param_2 + 0x1b8,
                               *(undefined4 *)(*(int *)(param_2 + 0x1bc) + 0x174));
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    fn_822B91F8(*(undefined4 *)(param_2 + 0x11c),*(undefined4 *)(param_2 + 0x14),*puVar2,cVar3);
    if (*(int *)(param_2 + 0x24) != 0) {
      fn_82230110(auStack_60,0xffffffff821adefc);
      fn_8234C258((ulonglong)*(uint *)(param_2 + 0x118) + 0x150,(uint)(param_4 == 0),auStack_60)
      ;
      fn_82230300(auStack_60,1,0);
      if (*(int *)(((param_4 == 0) + 0xe) * 0x2c + *(int *)(param_2 + 0x118) + 0x18) != 1) {
        fn_8234C320(1);
      }
    }
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  fn_822B9390(*(undefined4 *)(param_2 + 0x11c),*puVar2,cVar3);
}

