package com.laaouatni.AdhanApp;

import androidx.appcompat.app.AppCompatActivity;
import androidx.annotation.*;
import android.app.*;
import android.os.*;
import android.view.*;
import android.view.View.*;
import android.widget.*;
import android.content.*;
import android.content.res.*;
import android.graphics.*;
import android.graphics.drawable.*;
import android.media.*;
import android.net.*;
import android.text.*;
import android.text.style.*;
import android.util.*;
import android.webkit.*;
import android.animation.*;
import android.view.animation.*;
import java.io.*;
import java.util.*;
import java.util.regex.*;
import java.text.*;
import org.json.*;
import android.widget.ScrollView;
import android.widget.LinearLayout;
import android.widget.TextView;
import android.graphics.Typeface;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentManager;
import androidx.fragment.app.DialogFragment;

public class AdhanActivity extends AppCompatActivity {
	
	private ScrollView vscroll1;
	private LinearLayout linear1;
	private LinearLayout linear3;
	private LinearLayout linear2;
	private LinearLayout Linea_Contenitore_Fajr;
	private LinearLayout Linea_Contenitore_Duhr;
	private LinearLayout Linea_Contenitore_Asr;
	private LinearLayout Linea_Contenitore_Maghrib;
	private LinearLayout Linea_Contenitore_ishaa;
	private TextView Fajr_Text_Titolo;
	private TextView Fajr_ApiOrario_time_Text;
	private TextView Duhr_Text_Titolo;
	private TextView Duhr_ApiOrario_time_Text;
	private TextView Asr_Text_Titolo;
	private TextView Asr_ApiOrario_time_Text;
	private TextView Maghrib_Text_Titolo;
	private TextView Maghrib_ApiOrario_time_Text;
	private TextView Ishaa_Text_Titolo;
	private TextView Ishaa_ApiOrario_time_Text;
	
	@Override
	protected void onCreate(Bundle _savedInstanceState) {
		super.onCreate(_savedInstanceState);
		setContentView(R.layout.adhan);
		initialize(_savedInstanceState);
		initializeLogic();
	}
	
	private void initialize(Bundle _savedInstanceState) {
		vscroll1 = findViewById(R.id.vscroll1);
		linear1 = findViewById(R.id.linear1);
		linear3 = findViewById(R.id.linear3);
		linear2 = findViewById(R.id.linear2);
		Linea_Contenitore_Fajr = findViewById(R.id.Linea_Contenitore_Fajr);
		Linea_Contenitore_Duhr = findViewById(R.id.Linea_Contenitore_Duhr);
		Linea_Contenitore_Asr = findViewById(R.id.Linea_Contenitore_Asr);
		Linea_Contenitore_Maghrib = findViewById(R.id.Linea_Contenitore_Maghrib);
		Linea_Contenitore_ishaa = findViewById(R.id.Linea_Contenitore_ishaa);
		Fajr_Text_Titolo = findViewById(R.id.Fajr_Text_Titolo);
		Fajr_ApiOrario_time_Text = findViewById(R.id.Fajr_ApiOrario_time_Text);
		Duhr_Text_Titolo = findViewById(R.id.Duhr_Text_Titolo);
		Duhr_ApiOrario_time_Text = findViewById(R.id.Duhr_ApiOrario_time_Text);
		Asr_Text_Titolo = findViewById(R.id.Asr_Text_Titolo);
		Asr_ApiOrario_time_Text = findViewById(R.id.Asr_ApiOrario_time_Text);
		Maghrib_Text_Titolo = findViewById(R.id.Maghrib_Text_Titolo);
		Maghrib_ApiOrario_time_Text = findViewById(R.id.Maghrib_ApiOrario_time_Text);
		Ishaa_Text_Titolo = findViewById(R.id.Ishaa_Text_Titolo);
		Ishaa_ApiOrario_time_Text = findViewById(R.id.Ishaa_ApiOrario_time_Text);
	}
	
	private void initializeLogic() {
	}
	
	public void _Font_Titoli(final View _nome_font) {
		
	}
	
	
	@Deprecated
	public void showMessage(String _s) {
		Toast.makeText(getApplicationContext(), _s, Toast.LENGTH_SHORT).show();
	}
	
	@Deprecated
	public int getLocationX(View _v) {
		int _location[] = new int[2];
		_v.getLocationInWindow(_location);
		return _location[0];
	}
	
	@Deprecated
	public int getLocationY(View _v) {
		int _location[] = new int[2];
		_v.getLocationInWindow(_location);
		return _location[1];
	}
	
	@Deprecated
	public int getRandom(int _min, int _max) {
		Random random = new Random();
		return random.nextInt(_max - _min + 1) + _min;
	}
	
	@Deprecated
	public ArrayList<Double> getCheckedItemPositionsToArray(ListView _list) {
		ArrayList<Double> _result = new ArrayList<Double>();
		SparseBooleanArray _arr = _list.getCheckedItemPositions();
		for (int _iIdx = 0; _iIdx < _arr.size(); _iIdx++) {
			if (_arr.valueAt(_iIdx))
			_result.add((double)_arr.keyAt(_iIdx));
		}
		return _result;
	}
	
	@Deprecated
	public float getDip(int _input) {
		return TypedValue.applyDimension(TypedValue.COMPLEX_UNIT_DIP, _input, getResources().getDisplayMetrics());
	}
	
	@Deprecated
	public int getDisplayWidthPixels() {
		return getResources().getDisplayMetrics().widthPixels;
	}
	
	@Deprecated
	public int getDisplayHeightPixels() {
		return getResources().getDisplayMetrics().heightPixels;
	}
}