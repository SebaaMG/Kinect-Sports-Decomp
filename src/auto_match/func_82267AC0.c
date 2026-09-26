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
#define _fStack_48 ((*(U64*)&fStack_48))
#define _fStack_50 ((*(U64*)&fStack_50))
#define _fStack_58 ((*(U64*)&fStack_58))
extern unsigned int *auStack_60;
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern unsigned int fStack_74;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern int fn_82265CC8();
extern int fn_82266000();
extern int fn_8227E638();
extern int fn_8227E790();
extern int fn_82A1DD38();


void fn_82267AC0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_60 [8];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  uVar5 = 0;
  piVar1 = *(int **)*param_1;
  if (piVar1 != (int *)*param_1) {
    iVar4 = 0;
    do {
      iVar2 = piVar1[2];
      iVar3 = fn_82266000(iVar2,&fStack_80,&fStack_70);
      if (iVar3 != 0) {
        fStack_78 = fStack_70 - fStack_80;
        fStack_74 = fStack_6c - fStack_7c;
        fn_8227E638(param_1[6],*(undefined4 *)(iVar2 + 0x40),&fStack_80,&fStack_78);
        _fStack_58 = CONCAT44(fStack_80 + fStack_78,fStack_7c);
        _fStack_48 = CONCAT44(fStack_80,fStack_7c + fStack_74);
        _fStack_50 = CONCAT44(fStack_80 + fStack_78,fStack_7c + fStack_74);
        fn_8227E790(param_1[6],uVar5,auStack_60);
        iVar3 = *(int *)(param_1[6] + 0xc);
        if ((uVar5 & 0xffffffff) < (ulonglong)(uint)(*(int *)(param_1[6] + 0x10) - iVar3 >> 2)) {
          iVar3 = *(int *)(iVar4 + iVar3);
          fn_82A1DD38(iVar3 + 0x94,iVar2 + 0x544,0x60);
          *(undefined4 *)(iVar3 + 0xf4) = 1;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      }
      if (*(int *)(iVar2 + 0xdc) != 0) {
        fn_82265CC8(iVar2);
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*param_1);
  }
  return;
}

