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
extern int fn_82230040();
extern int fn_8223B688();
extern int fn_8251BD48();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_4c;


undefined8 fn_8251BC68(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  
  puVar2 = (undefined4 *)fn_8265C9E0(0x38);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *(undefined4 *)(param_2 + 4);
    puVar2[1] = *(undefined4 *)(param_2 + 4);
    puVar2[2] = *(undefined4 *)(param_2 + 4);
    *(undefined1 *)(puVar2 + 0xd) = 0;
    *(undefined1 *)((int)puVar2 + 0x35) = 0;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)(param_4 + 0x1c);
      fn_8223B688(puVar2 + 3,param_4);
      puVar3 = puVar2 + 10;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      if (puVar3 != puVar4) {
        uVar1 = puVar2[0xb];
        puVar2[0xb] = *(undefined4 *)(param_4 + 0x20);
        *(undefined4 *)(param_4 + 0x20) = uVar1;
        uVar1 = *puVar3;
        *puVar3 = *puVar4;
        *puVar4 = uVar1;
      }
      *(undefined1 *)(puVar2 + 0xc) = *(undefined1 *)(param_4 + 0x24);
    }
    fn_8251BD48(param_1,param_2,param_3,puVar2);
    return param_1;
  }
  uStack_4c = 0;
  ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_50);
}

