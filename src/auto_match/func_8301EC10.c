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
extern unsigned int fStack_38;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern int fn_8301E1F8();
extern int fn_8301E220();
extern int fn_8301E2D8();
extern int fn_8301E638();
extern unsigned int lbl_83264610;
extern unsigned int lbl_83264614;
extern unsigned int lbl_83264618;
extern unsigned int lbl_83264628;
extern unsigned int lbl_8326462C;
extern unsigned int lbl_83264630;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined8 fn_8301EC10(uint param_1,float *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  double dVar4;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  if (param_1 < 8) {
    fStack_80 = *param_2;
    fStack_7c = param_2[1];
    fStack_78 = param_2[2];
    iVar3 = param_1 * 0x90;
    fStack_70 = param_2[3];
    fStack_6c = param_2[4];
    fStack_68 = param_2[5];
    *(float *)(&lbl_83264628 + iVar3) = param_2[6];
    *(float *)(&lbl_8326462C + iVar3) = param_2[7];
    *(float *)(&lbl_83264630 + iVar3) = param_2[8];
    dVar4 = (double)fn_8301E1F8(&fStack_80,&fStack_70);
    fStack_80 = -(float)((double)fStack_70 * dVar4 - (double)fStack_80);
    fStack_7c = -(float)((double)fStack_6c * dVar4 - (double)fStack_7c);
    fStack_78 = -(float)((double)fStack_68 * dVar4 - (double)fStack_78);
    fn_8301E638(&fStack_80);
    fn_8301E638(&fStack_70);
    *(float *)(&lbl_83264610 + iVar3) = fStack_80;
    *(float *)(&lbl_83264614 + iVar3) = fStack_7c;
    *(float *)(&lbl_83264618 + iVar3) = fStack_78;
    *(float *)(iVar3 + -0x7cd9b9e4) = fStack_70;
    *(float *)(iVar3 + -0x7cd9b9e0) = fStack_6c;
    *(float *)(iVar3 + -0x7cd9b9dc) = fStack_68;
    puVar2 = (undefined4 *)fn_8301E220(&uStack_60,&fStack_70,&fStack_80);
    uStack_44 = *(undefined4 *)(iVar3 + -0x7cd9b9e4);
    uStack_40 = *(undefined4 *)(iVar3 + -0x7cd9b9e0);
    uStack_3c = *(undefined4 *)(iVar3 + -0x7cd9b9dc);
    fStack_38 = *(float *)(&lbl_83264610 + iVar3);
    uStack_60 = *puVar2;
    uStack_34 = *(undefined4 *)(&lbl_83264614 + iVar3);
    uStack_5c = puVar2[1];
    uStack_30 = *(undefined4 *)(&lbl_83264618 + iVar3);
    uStack_58 = puVar2[2];
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    uStack_48 = uStack_58;
    fn_8301E2D8(0xffffffff831bc86c,&uStack_50,iVar3 + -0x7cd9b990);
    uVar1 = 1;
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}

