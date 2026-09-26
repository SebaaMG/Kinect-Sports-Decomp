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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82AA75B8();
extern unsigned int stack0x00000000;
extern unsigned int uStack_4c;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorSplatHalfWord();
extern V16 vectorUnpackD3D128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82A95B28(longlong param_1,int param_2)

{
  undefined8 in_r0;
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vr0 [16];
  undefined4 uStack_4c;
  
  uVar1 = ZEXT48(&stack0x00000000);
  param_2 = param_2 + 0x18;
  lVar2 = uVar1 - 0x44;
  lVar3 = 4;
  do {
    fn_82AA75B8(uVar1 - 0x50,((ulonglong)*(uint *)(param_2 + -0xc) & 0x7fffffff) * 2 + param_1
                      ,0x20001);
    param_2 = param_2 + 4;
    lVar3 = lVar3 + -1;{ V16 _vt0 = loadVectorLeftIndexed128(in_r0,uVar1 - 0x4e); memcpy(auVar4, &_vt0, 16); }{ V16 _vt1 = vectorSplatHalfWord(auVar4,0); memcpy(auVar4, &_vt1, 16); }
    vectorUnpackD3D128(in_vr0,0x14);
    altv300_30(auVar4,in_vs41);
    lVar2 = lVar2 + 4;
    *(undefined4 *)lVar2 = uStack_4c;
  } while (lVar3 != 0);
  altv300_23(in_vs42,in_vs43);
  altv300_21(auVar4,in_vs41);
  return;
}

