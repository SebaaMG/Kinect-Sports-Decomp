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
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82359C18();
extern int fn_824C9A10();
extern int fn_824C9F10();
extern int fn_824CA0B8();
extern int fn_824CA800();
extern int fn_825113E0();
extern int fn_82511668();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821C0B18;
extern unsigned int lbl_821C0B30;
extern unsigned int lbl_821C2424;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_824C9D38;
extern unsigned int uStack_44;
extern unsigned int uStack_64;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;


uint * fn_824C9480(uint *param_1,undefined8 param_2,uint *param_3,int param_4)

{
  uint uVar1;
  char cVar3;
  uint uVar2;
  uint *puVar4;
  undefined **ppuStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined **ppuStack_70;
  code *pcStack_6c;
  uint *puStack_68;
  undefined4 uStack_64;
  undefined ***pppuStack_60;
  undefined **ppuStack_50;
  undefined *puStack_4c;
  uint *puStack_48;
  undefined4 uStack_44;
  undefined ***pppuStack_40;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  if ((uVar2 != 0) && (cVar3 = fn_8223AAC0(uVar2), cVar3 != '\0')) {
    if (param_1[1] != 0) {
      fn_822315A0();
    }
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  fn_82230300(param_1 + 2,0,0);
  fn_82230300(param_1 + 9,0,0);
  param_1[0x10] = lbl_821CC160;
  param_1[0x13] = 0;
  uVar2 = fn_8265C9E0(0xc0);
  if (uVar2 != 0) {
    param_1[0x12] = uVar2;
    *(uint *)uVar2 = uVar2;
    *(uint *)(param_1[0x12] + 4) = param_1[0x12];
    *(uint *)(param_1[0x12] + 8) = param_1[0x12];
    *(undefined1 *)(param_1[0x12] + 0xb8) = 1;
    *(undefined1 *)(param_1[0x12] + 0xb9) = 1;
    fn_824CA0B8(param_1 + 0x15);
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    puVar4 = param_1 + 0x26;
    param_1[0x1e] = (uint)&lbl_821C2424;
    param_1[0x24] = 0;
    if (*(int *)(param_4 + 0x10) == 0) {
      param_1[0x2a] = 0;
    }
    else {
      if (*(int *)(param_4 + 0x10) != param_4) {
        puVar4 = (uint *)0x0;
      }
      uVar2 = (**(code **)**(undefined4 **)(param_4 + 0x10))
                        (*(undefined4 **)(param_4 + 0x10),puVar4);
      param_1[0x2a] = uVar2;
    }
    fn_824C9A10(param_1,param_2);
    pppuStack_40 = &ppuStack_50;
    uStack_44 = uStack_78;
    ppuStack_50 = &lbl_821C0B18;
    puStack_4c = &lbl_824C9D38;
    puStack_48 = param_1;
    fn_82511668(param_1 + 0x1e,&ppuStack_50);
    fn_825113E0((ulonglong)*param_1 + 0x1b8,0x16,param_1 + 0x1e);
    pcStack_6c = fn_824C9F10;
    pppuStack_60 = &ppuStack_70;
    ppuStack_70 = &lbl_821C0B30;
    uStack_64 = uStack_78;
    puStack_68 = param_1;
    fn_824CA800((ulonglong)**(uint **)(*param_1 + 0x194) + 400,&ppuStack_70);
    fn_82359C18(&ppuStack_70);
    return param_1;
  }
  uStack_7c = 0;
  ppuStack_80 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_80);
}

