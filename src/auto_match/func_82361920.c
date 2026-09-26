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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_82230040();
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82240378();
extern int fn_824A3140();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_34;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_82361920(int param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **ppuStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [28];
  undefined8 uStack_34;
  
  uStack_7c = 0x40;
  uStack_80 = param_3;
  uVar1 = fn_82230110(auStack_70);
  fn_82240378(auStack_50,uVar1);
  uStack_34 = CONCAT44(uStack_80,uStack_7c);
  puVar2 = (undefined4 *)fn_8265C9E0(0x34);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *(undefined4 *)(param_1 + 0xc);
    puVar2[1] = *(undefined4 *)(param_1 + 0xc);
    puVar2[2] = *(undefined4 *)(param_1 + 0xc);
    *(undefined1 *)(puVar2 + 0xc) = 0;
    *(undefined1 *)((int)puVar2 + 0x31) = 0;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      fn_82240378(puVar2 + 3,auStack_50);
      *(undefined8 *)(puVar2 + 10) = uStack_34;
    }
    fn_824A3140(&uStack_80,param_1 + 8,puVar2);
    fn_82230300(auStack_50,1,0);
    fn_82230300(auStack_70,1,0);
    return;
  }
  uStack_74 = 0;
  ppuStack_78 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_78);
}

