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
extern unsigned int *auStack_40;
extern unsigned int fStack_1c;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int fStack_74;
extern unsigned int fStack_78;
extern int fn_826EBD10();
extern int fn_8275E678();
extern int fn_8275EB90();
extern int fn_8275FE18();
extern int fn_8275FFC0();
extern int fn_82784708();
extern int fn_82784920();
extern unsigned int iStack_20;
extern unsigned int iStack_24;
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_82762BE0(int param_1,int param_2)

{
  uint uStack_80;
  uint uStack_7c;
  float fStack_78;
  float fStack_74;
  longlong lStack_70;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  char cStack_50;
  undefined1 auStack_40 [4];
  uint uStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  
  fn_8275FE18(auStack_40,param_1);
  fn_8275FFC0(param_1,&fStack_78,&uStack_7c,&uStack_80);
  lStack_70 = (longlong)iStack_30;
  fn_82784708((double)((float)(longlong)iStack_34 * fStack_1c),
                    (double)((float)lStack_70 * fStack_1c),param_2,(ulonglong)(uint)fStack_78 - 1,
                    (ulonglong)uStack_7c - 1,(ulonglong)uStack_80 - 1);
  while (uStack_3c < uStack_38) {
    fn_8275E678(auStack_40,&fStack_60,0);
    if (cStack_50 == '\0') {
      fStack_78 = fStack_58;
      fStack_74 = fStack_54;
      fn_826EBD10(param_2 + 8,&fStack_78);
      *(int *)(*(int *)(param_2 + 0x28) + 4) = *(int *)(*(int *)(param_2 + 0x28) + 4) + 1;
    }
    else {
      fn_82784920((double)fStack_60,(double)fStack_5c,(double)fStack_58,(double)fStack_54,
                        param_2);
    }
  }
  if (iStack_24 == 0) {
    iStack_24 = iStack_20;
  }
  *(int *)(param_1 + 4) = iStack_24;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  fn_8275EB90(param_1);
  return;
}

