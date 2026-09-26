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
extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern int fn_826EBD10();
extern int fn_8275E130();
extern int fn_8275E198();
extern int fn_8275FD58();
extern int fn_82784708();
extern int fn_82784920();


void fn_827629D8(int param_1,int param_2)

{
  bool bVar1;
  float afStack_50 [2];
  float fStack_48;
  float fStack_44;
  int aiStack_40 [4];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  char cStack_20;
  
  fn_8275FD58(aiStack_40,param_1);
  fn_8275E130(aiStack_40,&fStack_48,afStack_50);
  fn_82784708((double)fStack_48,(double)afStack_50[0],param_2,
                    (ulonglong)*(uint *)(param_1 + 0x14) - 1,
                    (ulonglong)*(uint *)(param_1 + 0x18) - 1,
                    (ulonglong)*(uint *)(param_1 + 0x1c) - 1);
  do {
    if (*(byte *)(aiStack_40[0] + 0x20) == 1) {
LAB_82762a54:
      bVar1 = true;
    }
    else {
      bVar1 = false;
      if ((*(byte *)(aiStack_40[0] + 0x20) & 0x80) == 0) goto LAB_82762a54;
    }
    if (bVar1) {
      return;
    }
    fn_8275E198(aiStack_40,&fStack_30,0);
    if (cStack_20 == '\0') {
      fStack_48 = fStack_28;
      fStack_44 = fStack_24;
      fn_826EBD10(param_2 + 8,&fStack_48);
      *(int *)(*(int *)(param_2 + 0x28) + 4) = *(int *)(*(int *)(param_2 + 0x28) + 4) + 1;
    }
    else {
      fn_82784920((double)fStack_30,(double)fStack_2c,(double)fStack_28,(double)fStack_24,
                        param_2);
    }
  } while( true );
}

